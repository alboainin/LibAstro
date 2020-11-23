#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <unordered_map>
#include <functional>

#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <signal.h>

namespace astro {
    
    enum class EventType {
        WindowClose,
        WindowResize,
        KeyPressed
    };
    

}
