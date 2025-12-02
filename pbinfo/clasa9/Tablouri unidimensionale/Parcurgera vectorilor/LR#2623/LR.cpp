#include <iostream>

using namespace std;

int main()
{
    int n, a[100000], vmin[100000], vmax[100000], min_cur = 1000000, max_cur = 0, cnt = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > max_cur)
        {
            max_cur = a[i];
        }
        vmax[i] = max_cur;
    }

    for(int i = n - 1; i >= 0; i--)
    {
        if(a[i] < min_cur)
        {
            min_cur = a[i];
        }
        vmin[i] = min_cur;
    }

    for(int i = 1; i < n - 1; i++)
    {
        if(a[i] >= vmax[i] && a[i] <= vmin[i])
        {
            cnt++;
            cout << i + 1 << ' ';
        }
    }

    cout << cnt;

    return 0;
}