#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0, cnt_max = 0;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        if(i < n)
        {
            cin >> x;
            while(x % 2 == 1 && x > 1)
            {
                x /= 2;
            }
        }
        if(i < n && x == 1)
        {
            cnt++;
        }
        else
        {
            if(cnt > cnt_max)
            {
                cnt_max = cnt;
            }
            cnt = 0;
        }
    }

    cout << cnt_max;

    return 0;
}