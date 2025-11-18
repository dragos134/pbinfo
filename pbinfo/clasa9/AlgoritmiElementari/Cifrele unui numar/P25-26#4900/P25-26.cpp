#include <iostream>

using namespace std;

int main()
{
    int n, rez = 0, p = 1;
    cin >> n;
    while(n)
    {
        int uc = n % 10, penc = n / 10 % 10;
        if(uc == 5 && penc == 2)
        {
            rez = 6 * p + rez;
        }
        else
        {
            rez = uc * p + rez;
        }
        p *= 10;
        n /= 10;
    }
    cout << rez;
    return 0;
}