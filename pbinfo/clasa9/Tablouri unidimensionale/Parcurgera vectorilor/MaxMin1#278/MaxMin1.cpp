#include <iostream>

using namespace std;

int main()
{
    int n, m, a[100], b[100], cnt = 0, maxn = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    for(int i = 0; i < m; i++)
    {
        cin >> b[i];
        if(b[i] > maxn)
        {
            maxn = b[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] > maxn)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}