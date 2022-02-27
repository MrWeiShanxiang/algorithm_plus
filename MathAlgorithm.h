#include <string>
#include <cmath>
#include <algorithm>
#include <array>

struct utils
{
public:
    int BinaryToDecimal(std::string m)
    {
        int ans = 0, weights = 1;
        const int length = m.size();
        for (int i = 0; i < length; ++i)
        {
            if (m[i] == '1')
            {
                ans += 1 * std::pow(2, length - i - 1);
            }
        }
        return ans;
    }
    std::string DecimalToBinary(int m)
    {
        std::string ret;
        while (m)
        {
            ret.append(std::to_string(m % 2));
            m = m / 2;
        }
        std::reverse(ret.begin(), ret.end());
        return ret;
    }
    int gcd(int m, int n)
    {
        if (m % n == 0)
        {
            return n;
        }
        return gcd(n, m % n);
    }
};

utils util;

template <std::size_t size>
std::string binary_add(std::array<std::string, size> add_values)
{
    int BinaryAddSum = 0;
    for (const auto &val : add_values)
    {
        std::string add_element = val;
        BinaryAddSum += util.BinaryToDecimal(val);
    }
    return util.DecimalToBinary(BinaryAddSum);
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
