#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    while(n % b)
    {
        n -= a;
        cout << a << ' ';
    }

    while(n)
    {
        n -= b;
        cout << b << ' ';
    }

    return 0;
}