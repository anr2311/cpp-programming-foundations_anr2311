#pragma once // tells the compiler to include this header file only once

/* alternative --> include guard:
    #ifndef __CODEDEMO_H__
    #define __CODEDEMO_H__
        ---- header data ----
    #endif // __CODEDEMO_H__ */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Inventory
{
    private:
        std::vector<std::string> *items; // pointer to vector of items
        int capacity; // max number of items (as character levels up)

    public:
        Inventory();
        Inventory(int capacity);
        ~Inventory();
        Inventory& operator+=(const std::string& item);
        Inventory& operator-=(const std::string& item);
        std::string operator[](int index) const;
        int getItemCount() const;
        void displayInventory() const;
};