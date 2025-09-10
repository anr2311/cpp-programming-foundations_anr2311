// Complete Guide to C++ Programming Foundations
// Exercise 04_06
// The Vector Class, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>

int main(){

    std::vector<std::string> checkpoints = {"start", "forest", "castle"};

    /* vector elements can only be inserted at back end */
    checkpoints.push_back("Cave");
    checkpoints.push_back("Finish");

    std::cout << "The size of vector is : " << checkpoints.size() << std::endl;

    std::cout << "The checkpoint at index 2 is " << checkpoints[2] << std::endl;

    checkpoints[2] = "dark castle";

    std::cout << "The updated checkpoint at index 2 is " << checkpoints[2] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
