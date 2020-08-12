#pragma once

#include <iostream>

#include <stdlib.h>
#include <termio.h> 
#include <sys/ioctl.h>
#include <unistd.h>


#include "text.h"
#include "cursor/cursor.h"

namespace astro {
int init();

void enableRawMode();
void disableRawMode();

void terminate();
}
