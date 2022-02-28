#include <iostream>
#include "../utils/type.hpp"
struct SomeData
{
    int a, b, c;
};
SomeData some_data;
int main()
{
    std::cout << type::type_to_string<decltype(some_data)>() << std::endl;
}