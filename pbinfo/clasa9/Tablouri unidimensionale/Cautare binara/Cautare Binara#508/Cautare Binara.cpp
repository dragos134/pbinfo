#include <iostream>

using namespace std;

int main()
{
    int n, x[25000], m, y_nr;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> y_nr;
        int st = 0, dr = n - 1, ok = 0;
        while(st <= dr)
        {
            int mij = (st + dr) / 2;
            if(y_nr < x[mij])
            {
                dr = mij - 1;
            }
            else if(x[mij] < y_nr)
            {
                st = mij + 1;
            }
            else
            {
                ok = 1;
                break;
            }
        }
        cout << ok << ' ';
    }

    return 0;
}