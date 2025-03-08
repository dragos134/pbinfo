#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, cnt = 0;
    double x, xMin = 10000, xMax = 0;
    vector<double> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    xMin = v[0];
    xMax = v[n - 1];
    if (xMin > xMax)
    {
        swap(xMin, xMax);
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < xMin || v[i] > xMax)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}