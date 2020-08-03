#pragma once

#include <iostream>

#include <termio.h> 
#include <sys/ioctl.h>
#include <unistd.h>

namespace astro {
int init();
void disableRawMode();
void enableRawMode();
void termsize();
void terminate();
}
