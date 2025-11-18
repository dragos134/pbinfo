#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], i_max = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > a[i_max])
        {
            i_max = i;
        }
    }

    for(int i = 0; i < i_max - 1; i++)
    {
        for(int j = i + 1; j < i_max; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = i_max + 1; i < n - 1; i++)
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