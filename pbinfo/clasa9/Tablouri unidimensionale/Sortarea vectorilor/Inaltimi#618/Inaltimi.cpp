#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], b[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
                t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << b[i] + 1 << ' ';
    }
    return 0;
}