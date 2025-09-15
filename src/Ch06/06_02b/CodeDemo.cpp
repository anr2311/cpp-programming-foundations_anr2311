// Complete Guide to C++ Programming Foundations
// Exercise 06_02
// Passing Values to a Function, by Eduardo Corpeño 

#include <iostream>

void doSquare(int* a)
{
    *a = (*a) * (*a);
}

void doSwap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 9, b = 10;
    // TODO: square 
    doSquare(&a);   
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    doSwap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    // TODO: swap
    doSwap(&a, &b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
