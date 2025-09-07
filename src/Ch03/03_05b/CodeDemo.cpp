// Complete Guide to C++ Programming Foundations
// Exercise 03_05
// Compound Assignment Operators, by Eduardo Corpeño 

#include <iostream>

int main(){
    int ammo = 30;
    int incoming_zombies = 20;

    std::cout << "Initial Ammo: " << ammo << std::endl;
    std::cout << "Initial Zombies Incoming: " << incoming_zombies << std::endl;

    // Addition assignment
    ammo += 10;
    std::cout << "New Ammo found: " << ammo << std::endl;

    // Subtraction assignment
    ammo -= 5;
    std::cout << "Ammo after some use: " << ammo << std::endl;

    // Multiplication assignment
    incoming_zombies *= 2;
    std::cout << "New Zombies Incoming: " << incoming_zombies << std::endl;

    // Division assignment
    ammo /= 2;
    std::cout << "Ammo shared with friend: " << ammo << std::endl;

    // Remainder assignment
    ammo %= 7; // when player loses his ammo pack, left with remainder of ammo in his gun
    std::cout << "Ammo pack lost: " << ammo << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
