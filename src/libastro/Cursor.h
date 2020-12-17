#pragma once

#include <iostream>
#include "Text.h"

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

#include "WindowEvent.h"


#define TopPos    astro::Cursor::Position::Begin
#define CenterPos astro::Cursor::Position::Center
#define LowerPos  astro::Cursor::Position::End

namespace astro {
    namespace Cursor {
        enum Position { 
            Begin,
            Center,
            End
        };
        bool VisibleCursor(bool state);
        unsigned int MoveCursor(Position cursorPos);
        unsigned int move(unsigned int x, unsigned int y);
    }
}
