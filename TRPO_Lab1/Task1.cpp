#include <iostream>
#include <cfenv>
#include <cmath>
 
 
int main()
{
    std::feclearexcept( FE_ALL_EXCEPT );
    float z = 123456789012345678901234567890.f * 12345678900;
    if ( std::fetestexcept( FE_OVERFLOW ) ) {
        std::cout << "overflow\n";
    } else {
        std::cout << "ok\n";
    }
}