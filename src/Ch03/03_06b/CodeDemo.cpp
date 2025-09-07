// Complete Guide to C++ Programming Foundations
// Exercise 03_06
// Preprocessor Directives, by Eduardo Corpeño 

#include <iostream> /* (no .h or other extensions) look for file in default include folder */
#include <cstdint>

#define MAX_AMMO 500 /* pre-processor will replace MAX_AMMO in any part of the code with constant value 500 */

#define DEBUG

int main(){
    /* the below types are portable across architectures unlike 'int' */
    int32_t ammo = MAX_AMMO / 5;
    uint8_t health_items = 5;

#ifdef DEBUG
    std::cout << "[DEBUG] Game starting here" << std::endl;
#endif

    ammo += 200; // Player finds extra ammo
    health_items -= 2; // Player uses some health items

    std::cout << "Final Ammo: " << ammo << std::endl;
    std::cout << "Remaining Health Items: " << (int) health_items << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
