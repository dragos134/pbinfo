#include <iostream>

using namespace std;

int main()
{
    short n;
    long long x, nr = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        short cifmax = 0;
        while(x)
        {
            if(x % 10 > cifmax)
            {
                cifmax = x % 10;
            }
            x /= 10;
        }
        nr = nr * 10 + cifmax;
    }

    cout << nr * nr;
}