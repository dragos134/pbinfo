#include <iostream>

using namespace std;

int main()
{
    int n, y, a[100];
    cin >> y >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int st = 0, dr = n - 1, ok = -1;
    while(st <= dr)
    {
        int mij = (st + dr) / 2;
        if(a[mij] < y)
        {
            st = mij + 1;
        }
        else if(a[mij] > y)
        {
            dr = mij - 1;
        }
        else
        {
            ok = mij;
            break;
        }
    }

    if(ok == -1)
    {
        cout << "Nu exista";
    }
    else
    {
        cout << "Da " << ok;
    }

    return 0;
}