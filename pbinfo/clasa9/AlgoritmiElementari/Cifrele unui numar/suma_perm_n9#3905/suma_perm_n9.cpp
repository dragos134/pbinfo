#include <iostream>

using namespace std;

int main()
{
    long long n, cpyn, s = 0, p = 1, f = 1, nrcif = 0, q;
    cin >> n;
    cpyn = n;

    while(cpyn)
    {
        nrcif++;
        p *= 10;
        f *= nrcif;
        cpyn /= 10;
    }
    f /= nrcif;

    q = (p - 1) / 9;
    q = q * f;


    while(n)
    {
        s = s + q * (n % 10);
        n /= 10;
    }

    cout << s;
    return 0;
}