#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

namespace astro {
    
    enum class EventType {
        WindowClose,
        WindowResize,
        KeyPressed
    };

    class Event 
    {
    public:
        void Dispacher
        {
        }

    }

}
