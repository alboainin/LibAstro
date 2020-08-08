#include "libastro.h"

namespace astro {
int init() {
    //std::cout << __VERSION << std::endl;
    //return true;
    system("clear");
    astro::Cursor::EnableCursor(false);
}

void terminate() {
    // Free memory on the heap
    // For now we will just wait for the input
    std::cin.get();
    astro::Cursor::EnableCursor(true);
    system("clear");
}

}  // namespace astro
