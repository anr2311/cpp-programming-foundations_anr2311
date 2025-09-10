// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

#define MAX_ARRAY_LENGTH 4u

int main(){

    /* auto keyword doesnt work for arrays */
    int enemies[MAX_ARRAY_LENGTH] = {10, 15, 20, 15};

    std::cout << "The game as 4 level enemies" << std::endl;
    std::cout << enemies[0] << std::endl;
    std::cout << enemies[1] << std::endl;
    std::cout << enemies[2] << std::endl;
    std::cout << enemies[3] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
