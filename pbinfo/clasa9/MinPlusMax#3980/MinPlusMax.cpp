#include <iostream>
using namespace std;

int main()
{
    int n, x, minn = 1000, maxn = 0;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        if (x < minn)
        {
            minn = x;
        }
        if (x > maxn)
        {
            maxn = x;
        }
    }
    cout << minn + maxn;
    return 0;
}