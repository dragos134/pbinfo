#include <iostream>

using namespace std;

int main()
{
    long long n, cpyn, p = 1;
    short cif = 0, i = 0;
    cin >> n;
    cpyn = n;
    while(n)
    {
        cif++;
        n /= 10;
    }
    n = cpyn;
    cpyn = 0;
    while(n)
    {
        if(i != cif / 2)
        {
            cpyn = n % 10 * p + cpyn;
            p *= 10;
        }
        i++;
        n /= 10;
    }

    cout << cpyn;
}