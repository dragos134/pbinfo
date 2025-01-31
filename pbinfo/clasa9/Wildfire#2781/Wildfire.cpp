#include <iostream>
using namespace std;

int main()
{
    int x, y, n, m, sl = 0, sc = 0;
    cin >> x >> y >> n >> m;
    if(x <= n / 2)
    {
        sl = n - x + 1;
    }
    else
    {
        sl = x;
    }

    if(y <= m / 2)
    {
        sc = m - y + 1;
    }
    else
    {
        sc = y;
    }

    cout << sc + sl - 1;


    return 0;
}