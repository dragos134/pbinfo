#include <iostream>

using namespace std;

int main()
{
    long long n, b, c, nz = 0, nc = 0, powB = 1;
    cin >> n >> b >> c;

    while(n)
    {
        nz = nz + powB * (n % 10);
        powB *= b;
        n /= 10;
    }

    cout << nz << ' ';

    while(nz)
    {
        nc = nc * 10 + nz % c;
        nz /= c;
    }

    cout << nc;

    return 0;
}