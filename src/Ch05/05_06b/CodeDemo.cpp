// Complete Guide to C++ Programming Foundations
// Exercise 05_06
// Traditional For Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> lapTimes = {92, 85, 88, 90, 87};
    float average = 0;

    auto ptr = lapTimes.begin();

    for (; ptr != lapTimes.end(); ptr++)
    {
        average += *ptr;
    }

    average /= lapTimes.size();
    
    std::cout << "The average is :" << average << std::endl << std::endl;
    return 0;
}
