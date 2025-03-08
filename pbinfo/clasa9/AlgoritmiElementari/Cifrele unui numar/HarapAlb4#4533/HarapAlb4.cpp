#include <iostream>
using namespace std;

int main()
{
    long long n, cmax = 0;
    cin >> n;
    while(n > 9)
    {
        int uc1 = n % 100;
        int uc2 = uc1 % 10 * 10 + uc1 / 10;
        if(uc1 > cmax)
        {
            cmax = uc1;
        }
        if(uc2 > cmax)
        {
            cmax = uc2;
        }
        n /= 10;
    }
    cout << cmax;
    return 0;
}