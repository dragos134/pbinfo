#include <iostream>
using namespace std;

int main()
{
    int c, n, k;
    cin >> c >> n >> k;
    if (c == 1)
    {
        cout << 2 * n - 1;
    }
    if (c == 2)
    {
        cout << (n - k) * 2 + 1;
    }
    return 0;
}