#include <iostream>

using namespace std;

int main()
{
    int a[1000], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] == a[i])
            {
                // stergere
                n--;
                for(int k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                j--;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}