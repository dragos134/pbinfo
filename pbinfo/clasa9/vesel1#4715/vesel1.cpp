#include <iostream>
using namespace std;

int main()
{
    short n, c;
    cin >> c >> n;

    if (c == 1)
    {
        unsigned long long nr_ves = 1;
        if (n == 1)
        {
            cout << 5;
        }
        else
        {
            while(n > 1)
            {
                nr_ves *= 5;
                n--;
            }
            nr_ves *= 4;
            cout << nr_ves;
        }
    }

    if (c == 2)
    {
        unsigned long long nr_tris = 1;
        while(n)
        {
            nr_tris *= 5;
            n--;
        }
        cout << nr_tris;
    }

    if (c == 3)
    {
        unsigned long long nr_ves = 1, nr_tris = 1, p = 1;
        if(n == 1)
        {
            cout << 0;
        }
        else
        {
            while(n > 1)
            {
                n--;
                nr_tris *= 5;
                nr_ves *= 5;
                p *= 10;
            }
            nr_ves *= 4;
            nr_tris *= 5;
            p *= 10;
            cout << p - p / 10 - nr_ves - nr_tris;
        }
    }

    return 0;
}