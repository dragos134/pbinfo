#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if((int)sqrt(a[i]) != sqrt(a[i]))
        {
            continue;
        }
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j] && (int)sqrt(a[j]) == sqrt(a[j]))
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}