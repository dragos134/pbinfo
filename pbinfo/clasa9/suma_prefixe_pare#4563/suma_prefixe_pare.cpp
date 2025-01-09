#include <iostream>
using namespace std;

int main()
{
    long long n, s = 0;

    cin >> n;

    while(n)
    {
        if (n % 2 == 0)
        {
            s += n;
        }

        n /= 10;
    }
    cout << s;
    return 0;
}