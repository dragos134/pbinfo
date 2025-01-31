#include <iostream>

using namespace std;

int main()
{
    int c, n, nr = 0;
    cin >> c >> n;
    if(c == 1)
    {
        while(n)
        {
            if(n % 10 % 2)
            {
                nr++;
            }
            n /= 10;
        }
    }
    if(c == 2)
    {
        while(n)
        {
            if(n % 10 % 2 == 0)
            {
                nr++;
            }
            n /= 10;
        }
    }
    cout << nr;
    return 0;
}