#include <exception>
#include <libastro.h>

#include <iostream>
#include <ostream>

using namespace astro;
int main() {
    //if (init() != 0) std::cout << "" << std::endl;
    #ifdef _UNIX_
    system("clear");
    #endif

    #ifdef _DOS_
    system("cls");
    #endif

    std::cin.get();
    return 0;
}
