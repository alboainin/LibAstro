#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>

int main() {
//    if (astro::init() != 0)
//        std::cout << "" << std::endl;


    //astro::enableRawMode();

//    astro::keyboard::captureInput(false);
//    std::cout << astro::Color::REVERSE_VIDEO << "Start" << std::endl; 

    auto[col, row] = GetTerminalSize();
    std::cout << astro::Color::FG_RED << col << "\n" << astro::Color::FG_GREEN << row << std::endl;
//    astro::Cursor::MoveCursor(astro::Cursor::Position::Center);


 // astro::termsize();
 
    astro::terminate();
    return 0;
}
