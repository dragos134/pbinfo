#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a[100000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    long long s = 0, cnt = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != a[i + 1])
        {
            s = s + cnt * (cnt - 1) / 2;
            cnt = 1;
        }
        else
        {
            cnt++;
        }
    }
    if(cnt > 1)
    {
        s = s + cnt * (cnt - 1) / 2;
    }

    cout << s;

    return 0;
}