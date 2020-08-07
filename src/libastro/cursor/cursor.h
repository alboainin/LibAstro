#pragma once

#include <iostream>
#include "../text.h"

namespace astro {
    namespace Cursor {
        enum Position { 
            Center
        };
        bool EnableCursor(bool state);
        unsigned int MoveCursor(Position cursorPos);
    }
}
