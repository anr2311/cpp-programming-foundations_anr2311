// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58};
    
    /* std::vector<int>::iterator scorePtr */

    auto scorePtr = playerScores.begin();

    printf("Size of the playerScores vector: %zu\n", playerScores.size());

    while (scorePtr != playerScores.end())
    {
        std::cout << *scorePtr << " ";
        scorePtr++;

        /* scorePtr = next(scorePtr, 1) */
    }
    std::cout << std::endl;

    int i = 0;
    do
    {
        std::cout << playerScores[i] << " ";
        i++;
    } while(i < playerScores.size());

    std::cout << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
