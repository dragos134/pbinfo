#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, cnt = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] / 10 % 10 == v[n - 1 - i] / 10 % 10)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}