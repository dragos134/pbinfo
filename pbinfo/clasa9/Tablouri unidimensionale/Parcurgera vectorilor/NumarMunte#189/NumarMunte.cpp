#include <iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        int ok = 1;

        int varf = 0;
        if((x % 10) >= (x / 10 % 10))
        {
            ok = 0;
        }
        while(x > 10 && !varf)
        {
            int uc = x % 10;

            if(uc > x / 10 % 10)
            {
                varf = 1;
            }
            if(uc == x / 10 % 10)
            {
                ok = 0;
            }

            x /= 10;
        }

        if(varf == 0)
        {
            ok = 0;
        }

        while(x > 10 && ok)
        {
            int uc = x % 10;

            if(uc <= x / 10 % 10)
            {
                ok = 0;
            }

            x /= 10;
        }

        cout << ok << '\n';
    }
    return 0;
}