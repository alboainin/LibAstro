#include <iostream>

#include "libastro.h"

namespace astro {
int init() {
    std::cout << __VERSION << std::endl;
    return true;
}
}  // namespace astro
