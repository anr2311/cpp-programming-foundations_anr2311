// Complete Guide to C++ Programming Foundations
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fahrenheit = 100;
    float celsius;

    celsius = (5.0/9.0) * (fahrenheit - 32);

    std::cout << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;
    std::cout << "Celsius   : " << static_cast<float>(celsius) << std::endl;

    float weight = 10.99;
    
    std::cout << std::endl;
    std::cout << "Float          : " << weight << std::endl;
    std::cout << "Integer part   : " << static_cast<int32_t>(weight) << std::endl;
    std::cout << "Fractional part: " << (weight - static_cast<int32_t>(weight)) << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
