#include <iostream>
using namespace std;

int main()
{
    short n;
    long long x = 1;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cout << x << ' ';
        x *= (i + 2);
    }

    return 0;
}