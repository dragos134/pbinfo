#include <iostream>
using namespace std;

int main()
{
    long long n, max1 = 0, max2 = 0;
    cin >> n;
    while (n)
    {
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        if (n > max2 && n < max1)
        {
            max2 = n;
        }
        cin >> n;
    }
    long long p = max1 * max2;
    if (p == 0)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << (long long)(max1 * max2);
    }
    return 0;
}