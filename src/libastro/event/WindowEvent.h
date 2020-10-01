#include "Event.h"

namespace astro {
    namespace Window
    {
        unsigned int m_Columns, m_Rows;
        
        unsigned int GetColumns() const { return m_Columns; }
        unsigned int GetRows()    const { return m_Rows;    }

        std::tuple<unsigned int, unsigned int> GetTerminalSize() {
            struct winsize size;
            ioctl(0, TIOCGWINSZ, &size);
    
            rows = size.ws_row;
            columns = size.ws_col;

            return std::make_tuple(row, columns);
        }
    }    
}
