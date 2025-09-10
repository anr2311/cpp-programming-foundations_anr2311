// Complete Guide to C++ Programming Foundations
// Exercise 04_10
// The String Class, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    // const size_t LENGTH = 50;
    /* c++ string class handles the string lengths */
    std::string racer1 = "Speedy";
    std::string racer2 = "Lightening";
    std::string raceResult;

    /* below is not needed */
    // strncpy(racer2, "Lightning", sizeof(racer2) - 1);
    // racer2[sizeof(racer2) - 1] = '\0';

    std::cout << "Racer 1: " << racer1 << std::endl;
    std::cout << "Racer 2: " << racer2 << std::endl;

    /* below is not needed */
    // strncpy(raceResult, "And the winner is ", sizeof(raceResult) - 1);
    // raceResult[sizeof(raceResult) - 1] = '\0';

    /* OPERATOR OVERLOADING(+) can be done!! */
    raceResult = "And the winner is " + racer1;

    /* below is not needed */
    // strncat(raceResult, racer1, sizeof(raceResult) - strlen(raceResult) - 1);

    /* string class handles the buffer overflows potentially possible with cstring methods */

    std::cout << raceResult << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
