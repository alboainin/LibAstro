#include "cursor.h"


namespace astro { 
    namespace cursor {

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
            
            auto[col, row] = GetTerminalSize();
            unsigned int col, row = 1;
            auto halfCol = col / 2;
            auto halfRow = row / 2;
                    
            /* This is just for demonstration purposes */
            if(cursorPos == Position::Center)
            {
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                std::cout << astro::color::REVERSE_VIDEO << "Start" << "\e[m";
                halfRow++;
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";

                halfRow++;
                std::cout << "Options";
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                
                std::cout << "Exit";

            }

        }
    }
}
