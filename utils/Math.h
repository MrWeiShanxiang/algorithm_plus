#include "includes_config.h"
namespace utils
{
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
}