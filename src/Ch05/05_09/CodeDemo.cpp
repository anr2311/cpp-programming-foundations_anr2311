// Complete Guide to C++ Programming Foundations
// Challenge 05_09
// Calculate Resource Cost, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>

struct Resource{
    std::string name;
    double baseCost;
    char type; // 'B' for Basic, 'L' for Luxury, 'E' for Essential
};

double CalculateTotalCost(std::vector<Resource> resources){
    double result = 0.0;
    
    /* range-based for loop */
    /* The first is a variable declaration which will hold an element in a sequence. The second is the sequence to traverse */
    for (auto x : resources)
    {
        if (x.type == 'B')
        {
            result += x.baseCost + (0.05) * x.baseCost;
        }
        else if (x.type == 'L')
        {
            result += x.baseCost + (0.15) * x.baseCost;
        }
        else
        {
            result += x.baseCost;
            /* no tax */
        }
    }
    
    return result;
}

int main(){
    
    // Example 1 resources
    std::vector<Resource> resources = {
        {"Wood", 125.0, 'B'},
        {"Gold", 200.0, 'L'},
        {"Water", 50.0, 'E'}
    };

    double learnerResult = CalculateTotalCost(resources);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
