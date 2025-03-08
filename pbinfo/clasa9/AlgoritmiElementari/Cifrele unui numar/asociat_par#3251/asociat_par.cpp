#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        int xcpy, asoc = 0, og = 0, p = 1;
        bool ok = false;
        if(x == 0)
        {
            ok = true;
        }
        while(x)
        {
            if(x % 10 % 2 == 0)
            {
                asoc = p * (x % 10) + asoc;
                p *= 10;
                ok = true;
            }

            x /= 10;
        }
        if(ok)
        {
            xcpy = asoc;
            while(asoc)
            {
                og = og * 10 + asoc % 10;
                asoc /= 10;
            }
            if(xcpy == og)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}