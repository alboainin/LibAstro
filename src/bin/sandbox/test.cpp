#include <libastro.h>

#include <iostream>
#include <ostream>

int main() {
    if (astro::init() != 0) std::cout << "" << std::endl;

    return 0;
}
