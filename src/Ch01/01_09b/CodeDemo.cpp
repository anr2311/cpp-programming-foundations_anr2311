// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout << "Enter Name:";    
    std::cin >> name;
    std::cout << std::endl;

    std::cout << "Hi " << name << "!" <<  std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}