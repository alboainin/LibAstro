#include "astro.h"

namespace astro {    
    namespace keyboard { 
        struct termios orig_termios, mod_termios;

        void resetInput() {
            tcsetattr(STDIN_FILENO,TCSANOW,&orig_termios);
        }

        void captureInput(bool keyVal) {
            unsigned int key;

            tcgetattr(STDIN_FILENO,&orig_termios);
            mod_termios=orig_termios;
            atexit(resetInput);
            mod_termios.c_lflag &=(~ICANON & ~ECHO);
            tcsetattr(STDIN_FILENO,TCSANOW,&mod_termios);
            
            do {
                key = getchar();
                
                if(keyVal == true)
                {
                    printf("%d",key);
                }
                // Test Case: if space button pressed it will print "SPACE"
                if(key == Keys::ENTER)
                {

                    printf("SPACE\n");
                }

                if(key == Keys::ARROW_UP)
                {
                    printf("UP\n");
                }
 
            } while(key!='*');
        }
    } 
}


