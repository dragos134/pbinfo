#include <iostream>

using namespace std;

int differenceOfSums(int n, int m)
{
    int num1 = n * (n + 1) / 2;
    int aux = (n / m) * (n / m + 1) / 2;
    int num2 = 2 * m * aux;
    return num1 - num2;
}

int main()
{
    cout << differenceOfSums(5, 1);
    return 0;
}