#include <iostream>

using namespace std;

int main()
{
    int n, i = 2, cnt_max = 0, max_fac = 0;
    cin >> n;
    while(i <= n)
    {
        int cnt = 0;
        while(n % i == 0)
        {
            n /= i;
            cnt++;
        }
        if(cnt >= cnt_max)
        {
            cnt_max = cnt;
            max_fac = i;
        }

        i++;

        if(n > 1 && i * i > n)
        {
            i = n;
        }
    }
    cout << max_fac;
    return 0;
}