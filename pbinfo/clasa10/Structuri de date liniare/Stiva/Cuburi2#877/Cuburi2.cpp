#include <iostream>
using namespace std;

int main()
{
    int n, s[1000], si[1000], cnt = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(cnt == 0)
        {
            s[0] = x;
            si[0] = i + 1;
            cnt++;
        }
        else
        {
            if(x <= s[cnt - 1])
            {
                s[cnt] = x;
                si[cnt] = i + 1;
                cnt++;
            }
            else
            {
                while(cnt > 0 && x > s[cnt - 1])
                {
                    cnt--;
                }
                s[cnt] = x;
                si[cnt] = i + 1;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
    for(int i = 0; i < cnt; i++)
    {
        cout << si[i] << ' ';
    }
    return 0;
}