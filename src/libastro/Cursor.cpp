#include "Cursor.h"
#include "Text.h"


namespace astro { 
    namespace Cursor {

        bool VisibleCursor(bool state)
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
                std::cout << "\e[" << 0 << ";" << 0 << "f";
            }

            if(cursorPos == Position::Center)
            {
                std::cout << "\e[" << halfRow << ";" << halfCol << "f";
            }

            
            if(cursorPos == Position::End)
            {
            }

        }

        unsigned int move(unsigned int x, unsigned int y)
        {
            std::cout << "\e[" << x << ";" << y << "f";
        }
    }
}
