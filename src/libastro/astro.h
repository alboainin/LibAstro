#pragma once

#include <iostream>

#include <stdlib.h>
#include <termio.h> 
#include <sys/ioctl.h>
#include <unistd.h>

#include "dimensions.h"
#include "text.h"
#include "cursor/cursor.h"

namespace astro {
int init();

void enableRawMode();
void disableRawMode();

    namespace keyboard {     
        enum Keys { 
            ARROW_UP    = 65,
            ARROW_DOWN  = 66,
            ARROW_RIGHT = 67,
            ARROW_LEFT  = 68,
            ENTER =  10,
            SPACE = 32
        };
        void captureInput(bool KeyVal);
        void resetInput();
    }

void termsize();
void terminate();
}
