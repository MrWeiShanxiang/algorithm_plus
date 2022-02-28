#include <string>
#include <cmath>
#include <algorithm>
#include <array>
#include "../utils/Math.h"

template <std::size_t size>
std::string binary_add(std::array<std::string, size> add_values)
{
    int BinaryAddSum = 0;
    for (const auto &val : add_values)
    {
        std::string add_element = val;
        BinaryAddSum += utils::BinaryToDecimal(val);
    }
    return utils::DecimalToBinary(BinaryAddSum);
}

// 返回最匹配查找值的值
template <typename _find_key_Tp_>
_find_key_Tp_
near_search(
    const std::vector<_find_key_Tp_> &numbers_array,
    _find_key_Tp_ find_key)
{
    std::vector<_find_key_Tp_> result;
    for (const _find_key_Tp_ &val : numbers_array)
    {
        if (find_key > val)
            result.push_back(find_key - val);
        else
            result.push_back(val - find_key);
    }
    return numbers_array[std::min_element(result.begin(), result.end()) - result.begin()];
}
