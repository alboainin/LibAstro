#pragma once

#include <iostream>

namespace astro {
    namespace Cursor {
    inline bool EnableCursor(bool state)
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
    }   
}
