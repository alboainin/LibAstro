#pragma once

#include "Event.h"

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

        inline void captureInput(bool keyVal) {
            unsigned int key;

            tcgetattr(STDIN_FILENO,&kb_orig_termios);
            kb_mod_termios=kb_orig_termios;
            atexit(resetInput);
            kb_mod_termios.c_lflag &=(~ICANON & ~ECHO);
            tcsetattr(STDIN_FILENO,TCSANOW,&kb_mod_termios);
            
            do {
                key = getchar();
                
                if(keyVal == true)
                {
                    printf("%d",key);
                }
                // Test Case: if space button pressed it will print "SPACE"
                if(key == Keys::ENTER)
                {
                    printf("ENTER\n");
                }
                
                if(key == Keys::ARROW_UP)
                {
                    printf("UP\n");
                }
                if(key == Keys::ARROW_DOWN)
                {
                    printf("DOWN\n");
                }
 
            } while(key!='*');
        }   
    } 
}

