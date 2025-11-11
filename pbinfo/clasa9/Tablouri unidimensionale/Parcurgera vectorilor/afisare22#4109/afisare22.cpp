#include <iostream>

using namespace std;

int main()
{
    int x[10000], y[10000], n, m, max_val = -1000000000, ok = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    cin >> m;

    for(int i = 0; i < m; i++)
    {
        cin >> y[i];
    }

    for(int i = 0; i < m; i++)
    {
        if(y[i] > max_val)
        {
            max_val = y[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(x[i] > max_val)
        {
            ok = 1;
            cout << x[i] << ' ';
        }
    }

    if(ok == 0)
    {
        cout << "NU EXISTA";
    }
    return 0;
}