// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 999;
    bool gamePaused = false;
    char action = 'x';

    if (1000u < score && gamePaused == false)
    {
        std::cout << "Your score is over 1000" << std::endl;
    }
    else
    {
        std::cout << "Your score is less than 1000" << std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return 0;
}
