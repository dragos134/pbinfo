#include <iostream>
using namespace std;

int main()
{
    long long t, n, c1, c2, c3, s;
    cin >> t >> n >> c1 >> c2;

    if (t == 1)
    {
        cout << n - 1 - ((n - 1) / c1 + (n - 1) / c2 - (n - 1) / (c1 * c2));
    }

    if (t == 2)
    {
        cin >> c3;
        s = (n - 1) / c1 + (n - 1) / c2 + (n - 1) / c3;
        s = s - (n - 1) / (c1 * c2) - (n - 1) / (c2 * c3) - (n - 1) / (c1 * c3);
        s = s + (n - 1) / (c1 * c2 * c3);
        cout << n - 1 - s;
    }
}