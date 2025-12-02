#include <iostream>

using namespace std;

int main()
{
    int n, a[100000], dif_max;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dif_max = a[0] - a[1];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; i < n; j++)
        {
            if(a[j] - a[i] > dif_max)
            {
                dif_max = a[i] - a[j];
            }
        }
    }

    cout << dif_max;

    return 0;
}