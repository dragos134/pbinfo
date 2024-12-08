#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, x, y;
    cin >> a >> b >> c >> d;
    if (a > d || b < c)
    {
        x = -1;
        y = -1;
    }
    else
    {
        if (a <= c && b >= d)
        {
            x = c;
            y = d;
        }
        else if (c <= a && d >= b)
        {
            x = a;
            y = b;
        }
        else if (b >= c && b <= d)
        {
            x = c;
            y = b;
        }
        else if (a >= c && a <= d)
        {
            x = a;
            y = d;
        }
    }

    cout << x << ' ' << y;
    return 0;
}