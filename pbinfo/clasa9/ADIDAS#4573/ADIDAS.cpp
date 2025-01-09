#include <iostream>

using namespace std;

int main()
{
    int n, x, nmax = 0, c1, c2, c3, c4, c5, c6, c7;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        c1 = x % 10;
        c2 = x / 10 % 10;
        c3 = x / 100 % 10;
        c4 = x / 1000 % 10;
        c5 = x / 10000 % 10;
        c6 = x / 100000 % 10;
        c7 = x / 1000000 % 10;
        if(c6 && !c7)
        {
            if(c3 == c5 && c2 == c6 && c6 != c5 && c5 != c4 && c4 != c1 && c6 != c1 && c6 != c4 && c5 != c1)
            {
                if(x > nmax)
                {
                    nmax = x;
                }
            }
        }
    }
    if(nmax)
        cout << nmax;
    else
        cout << "nu exista";
    return 0;
}