#include <iostream>

using namespace std;

int main()
{
    int n, cpyn, cmin = 10, cmax = 0;
    cin >> n;
    cpyn = 0;
    while(n)
    {
        int uc = n % 10;
        if(uc > cmax)
        {
            cmax = uc;
        }
        if(uc < cmin)
        {
            cmin = uc;
        }
        cpyn = cpyn * 10 + uc;
        n /= 10;
    }
    n = cpyn;
    while(n)
    {
        int uc = n % 10;
        if(uc == cmin)
        {
            cout << cmax;
        }
        else if(uc == cmax)
        {
            cout << cmin;
        }
        else
        {
            cout << uc;
        }
        n /= 10;
    }
    return 0;
}