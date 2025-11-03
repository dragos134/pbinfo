#include <iostream>

using namespace std;

int main()
{
    int a[1000], n, min_val;
    cin >> n >> a[0];
    min_val = a[0];
    
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < min_val)
        {
            min_val = a[i];
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i] == min_val)
        {
            // stergere
            n--;
            for(int j = i; j < n; j++)
            {
                a[j] = a[j + 1];
            }
            i--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}