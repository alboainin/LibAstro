#include <iostream>
#include <ostream>

#include <LibAstro>

int main()
{
    if (astro::init() != 0)
      std::cout << "" << std::endl;

      return 0;
}
