#include <asm-generic/ioctls.h>
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

#include "astro.h"
#include "libastro.h"

namespace astro {
int init() {
    //std::cout << __VERSION << std::endl;
    //return true;
    system("clear");
    
}

void disableRawMode() 
{
}

void enableRawMode() {
  struct termios raw;
  tcgetattr(STDIN_FILENO, &raw);
  raw.c_lflag &= ~(ECHO);
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

void termsize()
{
    struct winsize size;
    ioctl(0, TIOCGWINSZ, &size);

    unsigned int cols = size.ws_col;
    unsigned int rows = size.ws_row;
}

void terminate()
{
    // Free memory on the heap
    // For now we will just wait for the input
    std::cin.get();
}

}  // namespace astro
