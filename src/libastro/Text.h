#pragma once

#include <ostream>

namespace astro {
        namespace Color { 
            enum Code {
                FG_BLACK            = 30,
                FG_RED              = 31,
                FG_GREEN            = 32,
                FG_BLUE             = 34,
                FG_MAGENTA          = 35,
                FG_CYAN             = 36,
                FG_WHITE            = 37,
                FG_DEFAULT          = 39,

                FG_BLACK_BRIGHT     = 90,
                FG_RED_BRIGHT       = 91,
                FG_GREEN_BRIGHT     = 92,
                FG_BLUE_BRIGHT      = 94,
                FG_MAGENTA_BRIGHT   = 95,
                FG_CYAN_BRIGHT      = 96,
                FG_WHITE_BRIGHT     = 97,

                BG_BLACK            = 40,
                BG_RED              = 41,
                BG_GREEN            = 42,
                BG_BLUE             = 44,
                BG_MAGENTA          = 45,
                BG_CYAN             = 46,
                BG_WHITE            = 47,
                BG_DEFAULT          = 49,

                BG_BLACK_BRIGHT     = 100,
                BG_RED_BRIGHT       = 101,
                BG_GREEN_BRIGHT     = 102,
                BG_BLUE_BRIGHT      = 104,
                BG_MAGENTA_BRIGHT   = 105,
                BG_CYAN_BRIGHT      = 106,
                BG_WHITE_BRIGHT     = 107,
 
                NORMAL          = 0,
                BOLD            = 1,
                FAINT           = 2,
                ITALIC          = 3,
                UNDERLINE       = 4,
                SLOW_BLINK      = 5,
                RAPID_BLINK     = 6,
                REVERSE_VIDEO   = 7,
                
            };
              
            inline std::ostream& operator<<(std::ostream& os, Code code) {
                return os << "\e[" << static_cast<int>(code) << "m";
                }
    
    }
}   
