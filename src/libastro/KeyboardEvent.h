#pragma once

#include "Cursor.h"
#include "Text.h"
#include "WindowEvent.h"
#include "Event.h"
#include <cstdio>

namespace astro {
    namespace keyboard {


        enum Keys { 
            ARROW_UP    = 65,
            ARROW_DOWN  = 66,
            ARROW_RIGHT = 67,
            ARROW_LEFT  = 68,
            ENTER       =  10,
            SPACE       = 32
        };

        inline struct termios kb_orig_termios, kb_mod_termios;

        inline void resetInput() {
            tcsetattr(STDIN_FILENO,TCSANOW,&kb_orig_termios);
        }
    

        inline void MoveLine(unsigned int line)
        {  


            auto [WindowRow, WindowCol] = astro::Window::GetTerminalSize();
           
            if (line < 0) 
            {
                line = 0;
            }
           
            astro::Cursor::move(line, 0);
            std::cout << astro::Color::REVERSE_VIDEO << line << std::endl; 

        }    
        
        inline void NumberLines()
        {
            auto [WindowRow, WindowCol] = astro::Window::GetTerminalSize();
            
            for(int i=0; i < WindowRow; i++)
            {
                if(i < 10)
                {
                    astro::Cursor::move(i, 0);
                    std::cout << " " << i;
                    
                }
                else 
                {
                    astro::Cursor::move(i, 0);
                    std::cout << i << std::endl;
                }
            }
        }

        inline void captureInput(bool keyVal) {
            unsigned int key;

            tcgetattr(STDIN_FILENO,&kb_orig_termios);
            kb_mod_termios=kb_orig_termios;
            atexit(resetInput);
            kb_mod_termios.c_lflag &=(~ICANON & ~ECHO);
            tcsetattr(STDIN_FILENO,TCSANOW,&kb_mod_termios);
        
            NumberLines();

            unsigned int line = 0;   
            do {
                key = getchar();
                
                if(keyVal == true)
                {
                    //printf("%d",key);
                }
                // Test Case: if space button pressed it will print "SPACE"
                if(key == Keys::ENTER)
                {
                    printf("ENTER\n");
                }
                
                if(key == Keys::ARROW_UP)
                {
                    line--;
                    MoveLine(line);

                }
                if(key == Keys::ARROW_DOWN)
                {
                    line++;
                    MoveLine(line);
                }
 
            } while(key!='*');
        }   
    } 
}

