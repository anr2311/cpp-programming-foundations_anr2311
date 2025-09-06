// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

// strong typed enums (or) scoped enums:
enum class asset_type {texture, sound, animation, script};
enum class menu_section {bg, music, sound, controls, texture};

int main(){
    int sound = 8;
    asset_type asset;

    asset = asset_type::sound; 

    std::cout << "asset_value = " << (int)asset << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
