#include <iostream>

using namespace std;

int main()
{
    int n, m, a[1000], b[1000], cnt = 0, k = 0;

    // citire de la tastatura
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

    // verificare b in a
    for(int i = 0; i <= n - m; i++)
    {
        int j = i;
        while(j < n && k < m && a[j] == b[k])
        {
            j++;
            k++;
        }

        if(k == m)
        {
            cnt++;
        }
        k = 0;
    }

    cout << cnt;

    return 0;
}