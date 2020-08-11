#pragma once

#include <sys/ioctl.h>
#include <termios.h>
#include <unistd.h>
#include <iostream>
#include <tuple>


inline std::tuple<unsigned int, unsigned int> GetTerminalSize() {
    struct winsize size;
    ioctl(0, TIOCGWINSZ, &size);
    
    unsigned int column = size.ws_col;
    unsigned int row = size.ws_row;

    return std::make_tuple(column, row);
}
