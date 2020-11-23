#pragma once

#include <iostream>
#include "text.h"

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "WindowEvent.h"
#include "KeyboardEvent.h"

namespace astro {
    namespace cursor {
        enum Position { 
            Begin,
            Center,
            End
        };
        bool EnableCursor(bool state);
        unsigned int MoveCursor(Position cursorPos);
        void HandleResize(int sig);
        void run();
    }
}
