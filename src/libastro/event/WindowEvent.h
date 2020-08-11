#include "Event.h"

namespace astro {
    class WindowResizeEvent : public Event
    {
    public:
        WindowResizeEvent(unsigned int rows, unsigned int columns)
            :m_Columns(columns), m_Rows(rows) {}

        unsigned int GetColumns() const { return m_Columns; }
        unsigned int GetRows()    const { return m_Rows;    }
                 
    private:
        unsigned int m_Columns, m_Rows;
    

    public:
        inline std::tuple<unsigned int, unsigned int> GetTerminalSize() {
            struct winsize size;
            ioctl(0, TIOCGWINSZ, &size);
    
            rows = size.ws_row;
            columns = size.ws_col;

        return std::make_tuple(row, columns);
        }
    };
}
