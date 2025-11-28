#include <iostream>
using namespace std;

int main()
{
    int n, a, b, ka = 0, kb = 0;
    cin >> n >> a >> b;
    while(n % a)
    {
        n -= b;
        kb++;
    }
    ka = n / a;

    while(ka)
    {
        ka--;
        cout << a << ' ';
    }

    while(kb)
    {
        kb--;
        cout << b << ' ';
    }

    return 0;
}