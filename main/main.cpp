#include <iostream>

int countDigitsSum(unsigned int n) {
    if (n == 0)
        return 0;
    return (n % 10) + countDigitsSum(n / 10);
}

int main()
{
    unsigned int n;
    for (int i = 1; i < 1000; i++) {
        std::cout << i << " " << countDigitsSum(i) << std::endl;
    }
    return 0;
}
