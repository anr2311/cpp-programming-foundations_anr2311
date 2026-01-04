#include <iostream>
#include <optional>

int main()
{
    std::optional<int> num=42;
    if (num)
    {
        std::cout << "C++17 works, num: " << *num << std::endl;
    }
    return 0;
}
