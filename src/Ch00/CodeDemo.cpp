// Complete Guide to C++ Programming Foundations
// Exercise 00_03
// Using the Exercise Files in GitHub Codespaces, by Eduardo Corpeño 

// comment by anr
#define ANR_MOD 1

#include <iostream> /* pre-processor directive --> using a library to receive / print text to the screen */

#if (ANR_MOD)
int main(){
    /* std : library, :: scope resolution & cout object */
    /* << left bound insertion operator */
    std::cout << "Hello World!\n" << std::endl;

    return 0; /* returning 0 is to tell no errors in exec */
}
#else
int main(){
    float num_1, num_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    
    result = num_1 + num_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
#endif