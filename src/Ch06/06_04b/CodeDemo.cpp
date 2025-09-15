// Complete Guide to C++ Programming Foundations
// Exercise 06_04
// Writing Functions, by Eduardo Corpeño 

#include <iostream>
#include <string>

std::string getPlayerName()
{
    return "Alex";
}

int calculatePlayerScore (int baseScore, int multiplier)
{
    return baseScore * multiplier;
}

void displayPlayerScore (const std::string& name, const int& pscore)
{
    std::cout << name << " scored " << pscore << " points." << std::endl;
}

int main(){
    std::string playerName = getPlayerName();
    int score = calculatePlayerScore(75, 2);

    /* std::cout << playerName << " scored " << score << " points." << std::endl; */

    displayPlayerScore (playerName, score);
    
    std::cout << std::endl << std::endl;
    return 0;
}
