#include <iostream>
using namespace std;

int main()
{
    long long n, p = 1;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        p = p * i * i;
    }

    cout << p;
    return 0;
}