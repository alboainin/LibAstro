#include <cstdlib>
#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>


int draw() {
    
    if(astro::init() != 1)
        std::cout << "";
      // astro::enableRawMode();

    //astro::keyboard::captureInput(true);
    

    astro::keyboard::captureInput(true);
    
    astro::Cursor::MoveCursor(CenterPos);         
    
    //std::cout << astro::Color::REVERSE_VIDEO << "Start" << std::endl; 

    //astro::Cursor::MoveCursor(LowerPos); 
    std::cout << "By: " << astro::Color::FG_BLUE_BRIGHT << "Ali Alboainin" <<  astro::Color::FG_DEFAULT << std::endl;   
    

    //astro::Draw::Line(1, false);
    


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
