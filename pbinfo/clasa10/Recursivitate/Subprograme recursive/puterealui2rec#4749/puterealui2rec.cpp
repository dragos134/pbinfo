#include <iostream>

using namespace std;

int PDoi(int n)
{
    if (n == 1)
    {
        return 1;
    }

    if(n % 2)
    {
        return 0;
    }

    return PDoi(n / 2);
}

int main()
{
    return 0;
}