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

void captureInput();
void resetInput();

void termsize();
void terminate();
}
