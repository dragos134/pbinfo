#include <iostream>
#include <vector>
using namespace std;

int suma_div(int n)
{
    int s = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s += i;
            if (i * i != n)
                s += n / i;
        }
    }
    return s;
}

int main()
{
    int n, x, cnt = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        x = suma_div(x);
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] == v[j])
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}