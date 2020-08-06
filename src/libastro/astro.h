#pragma once

#include <iostream>

#include <stdlib.h>
#include <termio.h> 
#include <sys/ioctl.h>
#include <unistd.h>

namespace astro {
int init();

void enableRawMode();
void disableRawMode();

    namespace keyboard {     
        enum Keys { 
            ARROW_UP    = 279165,
            ARROW_DOWN  = 279166,
            ARROW_RIGHT = 279167,
            ARROW_LEFT  = 279168,
            ENTER =  10
        };
        void captureInput(bool KeyVal);
        void resetInput();
    }

void termsize();
void terminate();
}
