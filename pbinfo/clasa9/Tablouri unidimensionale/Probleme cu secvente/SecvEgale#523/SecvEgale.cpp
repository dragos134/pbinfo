#include <iostream>

using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int start = 0, start_max = 0, cnt = 1, cnt_max = 1;
    for(int i = 1; i <= n; i++)
    {
        if(i < n && a[i] == a[i - 1])
        {
            cnt++;
        }
        else
        {
            if(cnt >= cnt_max)
            {
                cnt_max = cnt;
                start_max = start;
            }
            start = i;
            cnt = 1;
        }
    }
    cout << start_max + 1 << ' ' << start_max + cnt_max;
    return 0;
}