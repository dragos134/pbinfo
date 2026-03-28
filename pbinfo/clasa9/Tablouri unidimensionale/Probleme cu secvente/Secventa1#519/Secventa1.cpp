#include <iostream>

using namespace std;

int main()
{
    int n, m, a[1000], b[1000], k = 0, ok = 0;
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

    for(int i = 0; i <= n; i++)
    {
        int j = i;
        while(j < n && a[j] == b[k])
        {
            k++;
            j++;
        }
        if(k == m && ok == 0)
        {
            ok = i + 1;
        }
        k = 0;
    }

    if(ok > 0)
    {
        cout << ok;
    }
    else
    {
        cout << "NU";
    }

    return 0;
}