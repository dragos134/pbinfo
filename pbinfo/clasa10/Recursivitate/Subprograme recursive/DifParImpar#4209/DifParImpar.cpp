#include <iostream>

using namespace std;

int DifParImpar(int n)
{
    if(n < 10)
    {
        return 1 - 2 * (n % 2);
    }
    return 1 - 2 * (n % 2) + DifParImpar(n / 10);
}

int main()
{
    return 0;
}