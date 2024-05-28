#include <iostream>
using namespace std;

int main()
{
    long long n, p = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        p = p * (2 * i - 1);
    }
    cout << p;

    return 0;
}