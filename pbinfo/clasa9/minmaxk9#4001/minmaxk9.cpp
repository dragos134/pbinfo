#include <iostream>
using namespace std;

int main()
{
    int k, x, xmin = 1000000, imin = 0, xmax = 0, imax = 0, isOk = 0;
    cin >> k;
    cin >> x;
    int n = 0;
    while(x)
    {
        if(x % 10 == k)
        {
            isOk = 1;
            if(x > xmax)
            {
                xmax = x;
                imax = n;
            }
            if(x < xmin)
            {
                xmin = x;
                imin = n;
            }
        }
        cin >> x;
        n++;
    }

    int a = min(imax, imin);
    int b = max(imax, imin);
    if (!isOk)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << b - a + 1;
    }
    
    return 0;
}