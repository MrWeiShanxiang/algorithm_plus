#include "includes_config.h"
namespace utils
{

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
    template <typename _Tp>
    _Tp median(_Tp *data, std::size_t size)
    {
        _Tp sum = 0, min = data[0], max = data[0];
        for (int i = 0; i < size; i++)
        {
            sum += data[i];
            if (data[i] > max)
            {
                max = data[i];
            }
            if (data[i] < min)
            {
                min = data[i];
            }
        }
        return (sum - min - max) / (size - 2);
    }
    template <typename _Tp>
    int median(std::vector<_Tp> data)
    {
        _Tp sum = 0, max = data.front(), min = data.front();
        for (const int &ele : data)
        {
            if (ele > max)
            {
                max = ele;
            }
            if (ele < min)
            {
                min = ele;
            }
            sum += ele;
        }
        return (sum - max - min) / (data.size() - 2);
    }
    template <typename _Tp>
    bool max(_Tp x, _Tp y) { return x > y ? x : y; }
    template <typename _Tp>
    bool min(_Tp x, _Tp y) { return x < y ? x : y; }

}