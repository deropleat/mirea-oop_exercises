#include <iostream>

int main()
{
    int n, Sum_n = 0;
    std::cin >> n;

    if (n > 0)
    {
        for (int i = 1; i <= n; i++) Sum_n = Sum_n + i;
        std::cout << "Sum_n = " << Sum_n;
    }
    else std::cout << "n is wrong (" << n << ")";

    return 0;
}
