#pragma once

#include <iostream>

#include <stdlib.h>
#include <termio.h> 
#include <sys/ioctl.h>
#include <unistd.h>

#include "Text.h"
#include "Cursor.h"
#include "Shapes.h"
#include "Event.h"
#include "KeyboardEvent.h"

namespace astro {
int init();

void enableRawMode();
void disableRawMode();

void terminate();
}
