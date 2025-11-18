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

    for(int z = 0; z < k; z++)
    {
        for(int i = z; i < n - k; i += k)
        {
            for(int j = i + k; j < n; j++)
            {
                if(a[i] > a[j])
                {
                    int t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}