#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100000], b[100000], c[200000], d[200000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int ia = 0, ib = 0, ic = 0, id = 0;

    while(ia < n && ib < m)
    {
        if(a[ia] < b[ib])
        {
            if(ic == 0 || ic > 0 && a[ia] != c[ic - 1])
            {
                c[ic++] = a[ia];
            }
            ia++;
        }
        else
        {
            if(a[ia] == b[ib])
            {
                d[id++] = b[ib];
            }

            if(ic == 0 || ic > 0 && b[ib] != c[ic - 1])
            {
                c[ic++] = b[ib];
            }
            ib++;
        }
    }

    while(ia < n)
    {
        if(ic == 0 || ic > 0 && a[ia] != c[ic])
        {
            c[ic++] = a[ia];
        }
        ia++;
    }

    while(ib < m)
    {
        if(ic == 0 || ic > 0 && b[ib] != c[ic])
        {
            c[ic++] = b[ib];
        }
        ib++;
    }

    for(int i = 0; i < ic; i++)
    {
        cout << c[i] << ' ';
    }
    cout << '\n';
    for(int i = 0; i < id; i++)
    {
        cout << d[i] << ' ';
    }

    return 0;
}