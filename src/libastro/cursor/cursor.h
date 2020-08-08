#pragma once

#include <iostream>
#include "../text.h"
#include "../dimensions.h"
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

namespace astro {
    namespace Cursor {
        enum Position { 
            Center
        };
        bool EnableCursor(bool state);
        unsigned int MoveCursor(Position cursorPos);
        void HandleResize(int sig);
        void run();
    }
}
