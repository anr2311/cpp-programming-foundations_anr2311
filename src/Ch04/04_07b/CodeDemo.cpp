// Complete Guide to C++ Programming Foundations
// Exercise 04_07
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <complex>

int main(){

    std::vector<std::complex<double>> points;

    points.push_back(std::complex<double>(3.5, 4.0));
    points.push_back(std::complex<double>(3.7, -5.0));
    points.push_back(std::complex<double>(2.5, 4.5));
    points.push_back(std::complex<double>(3.0, -9.1));

    std::cout << "The real part of index 0 is " << points.begin()->real() << std::endl;
    std::cout << "The imaginary part of index 3 is " << (points.end()-1)->imag() << std::endl;
    std::cout << "The real part of index 2 is " << prev(points.end(), 2)->real() << std::endl;
    std::cout << "The imaginary part of index 1 is " << next(points.begin())->imag() << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
