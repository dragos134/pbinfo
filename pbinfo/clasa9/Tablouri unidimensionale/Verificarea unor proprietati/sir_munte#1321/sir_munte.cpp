#include <iostream>

using namespace std;

int main()
{
    int n, x, v = 0, prev_x, ok = 1;
    cin >> n >> prev_x >> x;
    n -= 2;
    if(prev_x >= x)
    {
        ok = 0;
        n = 0;
    }
    prev_x = x;
    while(n)
    {
        n--;
        cin >> x;
        if(x == prev_x)
        {
            ok = 0;
        }
        if(v == 0)
        {
            if(prev_x > x)
            {
                v = 1;
            }
        }
        else
        {
            if(prev_x < x)
            {
                ok = 0;
            }
        }

        prev_x = x;

        if(v == 0 && n == 0)
        {
            ok = 0;
        }
    }

    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}