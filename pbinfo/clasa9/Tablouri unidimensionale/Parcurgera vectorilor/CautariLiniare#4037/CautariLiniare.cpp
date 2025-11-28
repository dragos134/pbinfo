#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], x, k, p = 0, q = 0, r = 0, ok_p = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> x >> k;

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            p = i + 1;
            ok_p = 1;
            break;
        }
    }

    if(ok_p)
    {
        for(int i = n - 1; i >= 0; i--)
        {
            if(a[i] == x)
            {
                q = i + 1;
                break;
            }
        }
    }

    if(ok_p)
    {
        for(int i = 0; i < n; i++)
        {
            if(a[i] == x)
            {
                k--;
            }
            if(k == 0)
            {
                r = i + 1;
                break;
            }
        }
    }

    cout << p << '\n' << q << '\n' << r;
    return 0;
}