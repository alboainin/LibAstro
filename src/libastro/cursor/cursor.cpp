#include "cursor.h"
            
namespace astro { 
    namespace Cursor {
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
            if(cursorPos == Position::Center)
            {
                std::cout << astro::Color::FG_GREEN << "Center" << std::endl;
            }
        }
    }
}
