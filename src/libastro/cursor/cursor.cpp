#include "cursor.h"
            
namespace astro { 
    namespace Cursor {

        bool EnableCursor(bool state)
        {
            if(state)
            {
                std::cout << "\x1B[?25h";
            }

            else
            {    
                std::cout << "\x1B[?25l";
            }
        }
         
        unsigned int MoveCursor(Position cursorPos)
        {   
           // auto[col, row] = GetTerminalSize();
            unsigned int col, row = 1;
            auto halfCol = col / 2;
            auto halfRow = row / 2;
            
            /* This is just for demonstration purposes */
            if(cursorPos == Position::Center)
            {
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                std::cout << astro::Color::REVERSE_VIDEO << "Start" << "\e[m";
                halfRow++;
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";

                halfRow++;
                std::cout << "Options";
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                
                std::cout << "Exit";

            }

        }
        void HandleResize(int sig)
        {
            signal(SIGWINCH, SIG_IGN);
            system("clear");
            MoveCursor(Position::Center);
            signal(SIGWINCH, HandleResize);
        }
        void run()
        {
            signal(SIGWINCH, HandleResize);
            astro::Cursor::MoveCursor(astro::Cursor::Position::Center);
        }
    }
}
