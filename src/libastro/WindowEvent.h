#pragma once

#include "Event.h"
#include <asm-generic/ioctls.h>
#include <csignal>
#include <sys/ioctl.h>
#include <unistd.h>

namespace astro {
    namespace Window
    {
        
        inline std::tuple<unsigned int, unsigned int> GetTerminalSize() {
    
            unsigned int rows, columns;

            struct winsize size;
            ioctl(0, TIOCGWINSZ, &size);
    
            rows = size.ws_row;
            columns = size.ws_col;

            return std::make_tuple(rows, columns);
        }

        static void sigwinchHandler(int sig)
        {
        }

        inline void CheckResize(int (*func)())
        {

            struct winsize ws;
            struct sigaction sa;

            sigemptyset(&sa.sa_mask);
            sa.sa_flags = 0;
            sa.sa_handler = sigwinchHandler;
            if(sigaction(SIGWINCH, &sa, NULL) == -1)
                std::cout << "Error: SIGATION Failed" << std::endl;

            for(;;)
            {
                pause();
            
                system("clear");
                if(ioctl(STDIN_FILENO, TIOCGWINSZ, &ws) == -1)
                    std::cout << "Error: IOCTL Failed" << std::endl;

                (*func)();
         
            }
        }
    }    
}
