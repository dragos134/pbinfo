#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if ((2 * n) % k == 0)
    {
        cout << n * 2 / k;
    }
    else
    {
        cout << n * 2 / k + 1;
    }

    return 0;
}