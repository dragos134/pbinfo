#include <iostream>
using namespace std;

int main()
{
    long long n, k, p = 1;
    bool ok = false;
    cin >> n >> k;

    while(n)
    {
        if (n % 10 != k)
        {
            ok = true;
            p *= n % 10;
        }
        n /= 10;
    }

    if(ok)
        cout << p;
    else
        cout << 0;
    return 0;
}