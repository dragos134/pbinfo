#include <iostream>
using namespace std;

int main()
{
    int n, c1, c2, c3, c4, max_l = 0, max_g = 0;
    cin >> n;

    c1 = n / 1000;
    c2 = n / 100 % 10;
    c3 = n / 10 % 10;
    c4 = n % 10;

    if (c1 > c2)
    {
        max_l = 10 * c1 + c2;
    }
    else
    {
        max_l = 10 * c2 + c1;
    }

    max_g = max_l;

    if (c2 > c3)
    {
        max_l = c2 * 10 + c3;
    }
    else
    {
        max_l = c3 * 10 + c2;
    }
    if (max_l > max_g)
    {
        max_g = max_l;
    }

    if (c3 > c4)
    {
        max_l = 10 * c3 + c4;
    }
    else
    {
        max_l = 10 * c4 + c3;
    }

    if (max_l > max_g)
    {
        max_g = max_l;
    }

    cout << max_g;

    return 0;
}