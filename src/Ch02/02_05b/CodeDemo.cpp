// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; /* they are global variable --> accessible by
all parts of the code (memory managed statically by compiler) unallocated once the program ends */

int main(){

    bool my_flag;

    a = 7;
    my_flag = false;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;

    my_flag = true;

    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
