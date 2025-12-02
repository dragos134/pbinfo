#include <iostream>

using namespace std;

int main()
{
    int n, x, prev_x, ok = 1, cresc;
    cin >> n >> prev_x >> x;
    n -= 2;
    if(prev_x > x)
    {
        cresc = 0;
    }
    else if(prev_x < x)
    {
        cresc = 1;
    }
    else
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
        if(cresc)
        {
            if(prev_x < x)
            {
                ok = 0;
            }
            else
            {
                cresc = 0;
            }
        }
        else
        {
            if(prev_x > x)
            {
                ok = 0;
            }
            else
            {
                cresc = 1;
            }
        }

        prev_x = x;
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