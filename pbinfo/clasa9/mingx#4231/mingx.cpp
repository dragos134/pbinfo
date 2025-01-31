#include <iostream>

using namespace std;

int main()
{
    long long n, x, cifm = 10;
    cin >> n >> x;
    while(n)
    {
        int uc = n % 10;
        if(uc < cifm && uc > x)
        {
            cifm = uc;
        }
        n /= 10;
    }
    if(cifm == 10)
    {
        cout << -1;
    }
    else
    {
        cout << cifm;
    }
    return 0;
}