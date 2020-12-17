#include "libastro.h"

namespace astro {
int init() {
    //std::cout << __VERSION << std::endl;
    //return true;
    
    system("tput smcup");
    system("clear");
    astro::Cursor::VisibleCursor(false);
}

void terminate() {
    // Free memory on the heap
    // For now we will just wait for the input
    std::cin.get();
    astro::Cursor::VisibleCursor(true);
    system("clear");
    system("tput rmcup");
    



}

}  // namespace astro
