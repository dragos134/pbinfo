#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], st, dr, ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    st = min(a[0], a[n - 1]);
    dr = max(a[0], a[n - 1]);
    for(int i = 1; i < n - 1; i++)
    {
        if(!(a[i] >= st && a[i] <= dr))
        {
            ok = 0;
            break;
        }
    }
    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}