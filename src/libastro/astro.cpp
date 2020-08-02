#include <asm-generic/ioctls.h>
#include <iostream>
#include <sys/ioctl.h>
#include <unistd.h>

#include "libastro.h"

namespace astro {
int init() {
    std::cout << __VERSION << std::endl;
    return true;
}

unsigned int termsize()
{
    struct winsize m_Terminal;
    ioctl(STDIN_FILENO, TIOCGWINSZ, &m_Terminal);
    unsigned int rows = m_Terminal.ws_row;
    unsigned int cols = m_Terminal.ws_col;
    }
}  // namespace astro
