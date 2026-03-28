#include <iostream>

using namespace std;

int main()
{
    int n, t, k, a[100000], secv = 0, cnt = 0;

    // citire de la tastatura
    cin >> n >> t >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for(int i = 0; i <= n; i++)
    {
        if(i < n && a[i] <= t)
        {
            secv++;
        }
        else
        {
            if(secv >= k)
            {
                cnt = cnt + secv - k + 1;
            }
            secv = 0;
        }
    }

    cout << cnt;

    return 0;
}