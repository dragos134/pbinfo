#include <iostream>

using namespace std;

int main()
{
    int n, k, a[1000];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < k - 1; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = k; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}