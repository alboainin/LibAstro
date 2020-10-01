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
            
            auto[col, row] = astro::Window::GetTerminalSize();

            auto halfCol = col / 2;
            auto halfRow = row / 2;
                    
        }
    }
}
