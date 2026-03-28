#include <iostream>

using namespace std;

int main()
{
    int n, m, a[20000], b[20000], x;
    cin >> n >> a[0];
    b[0] = 1;
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        b[i] = b[i - 1];
        if(a[i] != a[i - 1])
        {
            b[i]++;
        }
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> x;
        int st = 0, dr = n - 1;
        if(x >= a[0])
        {
            cout << 1 << '\n';
            continue;
        }
        while(st < dr)
        {
            int mij = (st + dr) / 2;
            if(x < a[mij])
            {
                st = mij + 1;
            }
            else if(a[mij] < x)
            {
                dr = mij - 1;
            }
            else
            {
                st = mij;
                dr = mij;
                break;
            }
        }

        if(a[dr] == x || x > a[dr])
        {
            cout << b[dr];
        }
        else
        {
            cout << b[dr] + 1;
        }
        cout << '\n';
    }

    return 0;
}