#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

#include <sys/ioctl.h>
#include <termios>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

namespace astro {
    namespace Event {
        enum EventType {
        };
        
        class Observer {
        };

        namespace Keyboard {

            enum Keys { 
                ARROW_UP    = 65,
                ARROW_DOWN  = 66,
                ARROW_RIGHT = 67,
                ARROW_LEFT  = 68,
                ENTER =  10,
                SPACE = 32
            };

            void captureInput(bool KeyVal);
            void resetInput();
        }

        namespace Window { 
            
        }
    }
}
