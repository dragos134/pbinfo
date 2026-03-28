#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n, m, a[100000], x, y;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        a[i] = x * x + y * y;
    }

    sort(a, a + n);

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x;
        x = x * x;
        int st = 0, dr = n - 1, p = -1;
        while(st <= dr)
        {
            int mij = (st + dr) / 2;
            if(x >= a[mij])
            {
                st = mij + 1;
                p = mij;
            }
            else
            {
                dr = mij - 1;
            }
        }
        cout << p + 1 << ' ';
    }

    return 0;
}