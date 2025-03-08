#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    int n, x, pieCnt = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (gcd(v[i], v[j]) == 1)
            {
                pieCnt++;
            }
        }
    }
    cout << pieCnt;
    return 0;
}