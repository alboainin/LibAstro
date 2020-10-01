#pragma once

#include "Event.h"

namespace astro {
    namespace Window
    {
        
        inline std::tuple<unsigned int, unsigned int> GetTerminalSize() {
    
            unsigned int rows, columns;

            struct winsize size;
            ioctl(0, TIOCGWINSZ, &size);
    
            rows = size.ws_row;
            columns = size.ws_col;

            return std::make_tuple(rows, columns);
        }
    }    
}
