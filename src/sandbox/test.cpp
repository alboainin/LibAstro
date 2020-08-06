#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>

int main() {
    if (astro::init() != 0)
        std::cout << "" << std::endl;


    //astro::enableRawMode();
    astro::keyboard::captureInput(false);


 // astro::termsize();
 
    astro::terminate();
    return 0;
}
