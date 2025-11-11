#include <iostream>

using namespace std;

int main()
{
    int t, n, m, a[1001], b[1001];
    cin >> t;
    while(t)
    {
        t--;
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
        int sum = 0, k = 0, ok = 1;
        for(int i = 0; i < n; i++)
        {
            sum += a[i];
            if(k < m && sum == b[k])
            {
                sum = 0;
                k++;
            }
            if(k < m && sum > b[k])
            {
                ok = 0;
                break;
            }
        }
        if(k < m && sum == b[k])
        {
            k++;
        }
        if(k < m && sum != b[k])
        {
            ok = 0;
        }
        if(k != m)
        {
            ok = 0;
        }
        cout << ok << '\n';
    }
    return 0;
}