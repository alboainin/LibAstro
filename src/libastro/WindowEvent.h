#include "Event.h"

namespace astro {
    namespace Window
    {
        
        std::tuple<unsigned int, unsigned int> GetTerminalSize() {
            struct winsize size;
            ioctl(0, TIOCGWINSZ, &size);
    
            rows = size.ws_row;
            columns = size.ws_col;

            return std::make_tuple(row, columns);
        }
    }    
}
