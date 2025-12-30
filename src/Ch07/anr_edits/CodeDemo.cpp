// Complete Guide to C++ Programming Foundations
// Exercise 07_02
// Data Members, by Eduardo Corpeño 

#include "CodeDemo.h"

Inventory::Inventory() : capacity(10) // initializer list
{
    items = new std::vector<std::string>();
}

Inventory::Inventory(int capacity)
{
    this->capacity = capacity;
    items = new std::vector<std::string>();
}

Inventory::~Inventory()
{
    delete items; // prevent memory leak by deallocating dynamic vector
}

// add item to inventory
Inventory& Inventory::operator+=(const std::string& item)
{
    if (items->size() < capacity)
    {
        items->push_back(item);
    }
    else
    {
        std::cout << "Inventory full! Cannot add item: " << item << std::endl;
    }
    return *this;
}
// remove item from inventory
Inventory& Inventory::operator-=(const std::string& item)
{
    auto it = std::find(items->begin(), items->end(), item);
    if (it != items->end())
    {
        items->erase(it);
    }
    else
    {
        std::cout << "Item not found in inventory: " << item << std::endl;
    }
    return *this;
}
// access items by index
std::string Inventory::operator[](int index) const // const prevents user from modifying anything inside func
{
    if (index >=0 && index < items->size())
    {
        return (*items)[index];
    }
    else
    {
        return "index out of bounds";
    }
}
// get number of items in the inventory
int Inventory::getItemCount() const
{
    return items->size();
}
// display inventory
void Inventory::displayInventory() const
{
    std::cout << "Inventory: [";
    for (int i = 0; i < items->size(); i++)
    {
        std::cout << (*items)[i];
        if (i < items->size()-1) std::cout <<",";
    }
    std::cout <<"]";
}

int main(){
    
    Inventory myInventory(5);

    //add 5 items
    myInventory += ("Health Potion");
    myInventory += ("Strength Potion");
    myInventory += ("Magic Potion");
    myInventory += ("Sword");
    myInventory += ("Shield");
    
    //remove some item
    myInventory -= ("Sword");

    //display the item count
    printf("Item Count: %d", myInventory.getItemCount());
    std::cout << std::endl;

    //access item by index
    std::cout << "Item at 2: " << myInventory[2];
    std::cout << std::endl;

    //display the inventory
    myInventory.displayInventory();
    std::cout << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
