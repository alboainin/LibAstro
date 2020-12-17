#include "astro.h"

namespace astro {

struct termios orig_termios, raw_termios;

void enableRawMode()
{
    tcgetattr(STDIN_FILENO, &orig_termios);
    atexit(disableRawMode);
   
    raw_termios.c_lflag &= ~(ECHO | ISIG | IXON);
    tcsetattr(STDIN_FILENO,TCSAFLUSH, &raw_termios);
}

void disableRawMode()
{
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}
}
