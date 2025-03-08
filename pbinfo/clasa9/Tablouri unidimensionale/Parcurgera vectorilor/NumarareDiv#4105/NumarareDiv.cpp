#include <iostream>
#include <vector>

using namespace std;

int nr_div(int n)
{
    int cnt = 0;
    for (int d = 1; d * d <= n; d++)
    {
        if (n % d == 0)
        {
            cnt++;
            if (d * d != n)
            {
                cnt++;
            }
        }
    }
    return cnt;
}

int main()
{
    int n, x, cnt = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x = nr_div(x);
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}