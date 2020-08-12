#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>


int main() {
    if (astro::init() != 0)
        std::cout << "" << std::endl;

//    astro::enableRawMode();

//    astro::keyboard::captureInput(false);
      std::cout << astro::Color::REVERSE_VIDEO << "Start" << std::endl; 

//     astro::Cursor::run();

 // astro::termsize();
 
    astro::terminate();
    return 0;
}
