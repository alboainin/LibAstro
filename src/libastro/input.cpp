#include "astro.h"

namespace astro { 

    struct termios orig_termios, mod_termios;

    void captureInput() {
    
        unsigned char key;

        tcgetattr(STDIN_FILENO,&orig_termios);
        mod_termios=orig_termios;

        mod_termios.c_lflag &=(~ICANON & ~ECHO);
        tcsetattr(STDIN_FILENO,TCSANOW,&mod_termios);

        do {
            key = getchar();
            // Test Case: if space button pressed it will print "SPACE"
            if(key == 10)
            {
                printf("SPACE");
            }
    
        } while(key!='*');
    }

    void resetInput()
    {
        tcsetattr(STDIN_FILENO,TCSANOW,&orig_termios);
    }
}


