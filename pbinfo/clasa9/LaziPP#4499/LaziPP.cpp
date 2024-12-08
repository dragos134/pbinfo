#include <iostream>
using namespace std;

int main()
{
    int a, b, c, h, res = 0;
    cin >> a >> b >> c >> h;
    h = h * 100;
    if (a < b && a < c)
    {
        res = h / a;
    }

    if (b < a && b < c)
    {
        res = h / b;
    }

    if (c < a && c < b)
    {
        res = h / c;
    }

    cout << res;

    return 0;
}