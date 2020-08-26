#include "libastro.h"

namespace astro {
int init() {
    //std::cout << __VERSION << std::endl;
    //return true;
    system("tput smcup");
    system("clear");
    astro::cursor::EnableCursor(false);
}

void terminate() {
    // Free memory on the heap
    // For now we will just wait for the input
    std::cin.get();
    astro::cursor::EnableCursor(true);
    system("clear");
    system("tput rmcup");
}

}  // namespace astro
