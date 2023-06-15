#include <iostream>

int main()
{
    int length = 1;
    long long int num;
    std::cin >> num;

    for (; abs(num) >= 10; num /= 10) length++;
    std::cout << "Number of digits: " << length;

    return(0);
}
