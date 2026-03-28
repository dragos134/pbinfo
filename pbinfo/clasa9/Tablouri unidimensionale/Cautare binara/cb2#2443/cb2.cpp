#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, q, a[100000], b[100000], c[100000], rasp[100000], x, s, max_nr;
    cin >> n >> a[0];
    b[0] = a[0];
    c[0] = a[0];
    max_nr = a[0];
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > max_nr)
        {
            max_nr = a[i];
        }

        c[i] = max_nr;
        b[i] = a[i] + b[i - 1];
    }

    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> x >> s;
        int st = 0, dr = n - 1, p = -1;
        while(st <= dr)
        {
            int mij = (st + dr) / 2;
            if(x >= c[mij] && s >= b[mij])
            {
                p = mij;
                st = mij + 1;
            }
            else
            {
                dr = mij - 1;
            }
        }
        rasp[i] = p + 1;
    }
    for(int i = 0; i < q; i++)
    {
        cout << rasp[i] << '\n';
    }
    return 0;
}