#include <iostream>
#include <vector>
#include "../utils/Math.h"
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << utils::median(arr, 5) << std::endl;
    std::vector<double> TestVector = {1, 2, 3, 4, 5};
    std::cout << utils::median(TestVector) << std::endl;
    return 0;
}