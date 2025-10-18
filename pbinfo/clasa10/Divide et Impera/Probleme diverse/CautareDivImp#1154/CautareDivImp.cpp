#include <iostream>
using namespace std;

void Cautare(int x[], int n, int y[], int z[], int st, int dr)
{
    if(st == dr)
    {
        for(int i = 0; i < n; i++)
        {
            if(x[i] == y[st])
            {
                z[st] = 1;
                break;
            }
        }
        return;
    }
    int mij = (st + dr) / 2;
    Cautare(x, n, y, z, st, mij);
    Cautare(x, n, y, z, mij + 1, dr);
}

int main()
{
    int a[1000], b[1000], c[1000], n, m;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        c[i] = 0;
    }
    Cautare(a, n, b, c, 0, m - 1);
    for(int i = 0; i < m; i++)
    {
        cout << c[i] << ' ';
    }
    return 0;
}