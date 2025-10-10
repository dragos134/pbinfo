#include <iostream>

using namespace std;

int CifDiv3Rec(int n)
{
    if (n < 10)
    {
        return n % 3 == 0;
    }
    return ((n % 10) % 3 == 0) + CifDiv3Rec(n / 10);
}

int main()
{
    cout << CifDiv3Rec(2009376);
    return 0;
}