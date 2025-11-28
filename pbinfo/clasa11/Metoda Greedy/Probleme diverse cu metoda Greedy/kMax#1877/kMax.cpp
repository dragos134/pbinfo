#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, v[1000], k, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }

    cin >> k;

    sort(v, v + n);

    for (int i = 0; i < k; i++)
    {
        s -= 2 * v[i];
    }

    cout << s;

    return 0;
}