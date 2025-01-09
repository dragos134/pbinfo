#include <iostream>

using namespace std;

int main()
{
    long long n, p = 1, cpyn, s = 0;

    cin >> n;
    cpyn = n;
    while(n > 9)
    {
        p = p * 10 + 1;
        n /= 10;
    }

    n = cpyn;
    while(n)
    {
        s += p * (n % 10);
        n /= 10;
    }

    cout << s;

    return 0;
}