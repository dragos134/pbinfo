#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, s, v[1000], k = 0, p = 0, total = 0;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v, v + n);

    while(total <= s && k < n)
    {
        total += v[k];
        k++;
    }

    p = total - s;
    if (p < 0)
    {
        p = 0;
    }

    if (k == n && p == 0)
    {
        k++;
    }

    cout << k - 1 << ' ' << p;

    return 0;
}