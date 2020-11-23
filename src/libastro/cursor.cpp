#include "cursor.h"
#include "text.h"


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
            
            auto[row, col] = astro::Window::GetTerminalSize();

            auto halfCol = col / 2;
            auto halfRow = row / 2;
            

            if(cursorPos == Position::Begin)
            {
            }

            if(cursorPos == Position::Center)
            {
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                std::cout << astro::color::REVERSE_VIDEO<< "Start" << "\e[m";
                halfRow++;
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";

                halfRow++;
                std::cout << "Options";
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
                
                std::cout << "Exit";

            }
            
            if(cursorPos == Position::End)
            {
            }

        }
    }
}
