#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>


int main() {
    if (astro::init() != 0)
        std::cout << "" << std::endl;

//        astro::enableRawMode();

        //astro::Keyboard::captureInput(true);
        astro::cursor::MoveCursor(astro::cursor::Center);         
        
        //std::cout << astro::color::REVERSE_VIDEO << "Start" << std::endl; 



 // astro::termsize();
 
    astro::terminate();
    return 0;
}
