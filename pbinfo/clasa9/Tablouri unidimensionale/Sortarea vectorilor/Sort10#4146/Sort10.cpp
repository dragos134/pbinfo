#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], k = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 10 == 0)
        {
            a[k] = a[i];
            k++;
        }
    }
    n = k;

    for(int i = 0; i < n - 1; i++)
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

    if(n == 0)
    {
        cout << "NU EXISTA";
    }
    return 0;
}