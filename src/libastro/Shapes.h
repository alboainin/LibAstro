#pragma once

#include "Cursor.h"
#include "WindowEvent.h"

namespace astro {
    namespace Draw {
        
        inline void Line(unsigned int column = 1, bool horizontal = false)
        {
            auto[row, col] = astro::Window::GetTerminalSize();            
            
            astro::Cursor::MoveCursor(TopPos);  
            
            
            for(int x; x < (row*1.5); x++)
            {
                std::cout << u8"" << std::endl;
            }
           
            
        }

        inline void Rectangle()
        {
        }
        
        inline void Triangle()
        {
        }
    }
}
