#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, xMin = 1000000, xMax = 0, iMin = 0, iMax = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x > xMax)
        {
            xMax = x;
            iMax = i;
        }
        if (x < xMin)
        {
            xMin = x;
            iMin = i;
        }
        v.push_back(x);
    }

    if (iMin > iMax)
    {
        swap(iMin, iMax);
    }
    for (int i = iMin; i <= iMax; i++)
    {
        cout << v[i] << ' ';
    }

    return 0;
}