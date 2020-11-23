#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>


int draw() {
    if (astro::init() != 0)
        std::cout << "" << std::endl;

     // astro::enableRawMode();

        //astro::keyboard::captureInput(true);

    astro::cursor::MoveCursor(astro::cursor::Position::Center);         
    
    //std::cout << astro::color::REVERSE_VIDEO << "Start" << std::endl; 

    astro::cursor::MoveCursor(astro::cursor::Position::End); 
    std::cout << "By: " << astro::color::FG_BLUE_BRIGHT << "Ali Alboainin" << std::endl;   
 
}

int main()
{

    draw(); // First draw function
    astro::Window::CheckResize(&draw); 
    
    /*We pass the function that is intended to be rendered into CheckResize function 
     * which recall the passed function each time the screen get resized*/

    astro::terminate();
    return 0;
}
