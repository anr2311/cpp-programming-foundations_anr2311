// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc};

struct game_characters
{
    std::string name;
    int level;
    character_role role;
};

int main(){
    
    game_characters buddy;

    buddy.name = "ANR";
    buddy.level = 100;
    buddy.role = character_role::sidekick;

    std::cout << "Name: " << buddy.name << std::endl;
    std::cout << "Level: " << buddy.level << std::endl;
    std::cout << "Role: " << (int)buddy.role << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
