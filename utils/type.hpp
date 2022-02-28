#include <iostream>
#include <string>
#include <vector>
namespace type
{
    template <typename T>
    std::string type_to_string()
    {
        // GNUC & Mingw
        std::string type_name{__PRETTY_FUNCTION__};
        auto start_pos = type_name.find_first_of('=') + 2;
        auto end_pos = type_name.find_first_of(';', start_pos);
        return type_name.substr(start_pos, (end_pos - start_pos));
    }
}