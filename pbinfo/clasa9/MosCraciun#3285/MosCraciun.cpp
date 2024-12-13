#include <iostream>
using namespace std;

int main()
{
    int n, x, xmax = 0, cnt = 0;
    cin >> n;

    for(int i = 0; i < n / 2; i++)
    {
        cin >> x;
        if (x > xmax)
        {
            xmax = x;
        }
    }
    for(int i = n / 2; i < n; i++)
    {
        cin >> x;
        if (x > xmax)
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}