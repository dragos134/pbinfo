#include <iostream>

using namespace std;

int main()
{
    int a[16], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int k = 0; k < n - 1; k++)
    {
        for(int i = 0; i < n; i++)
        {
            cout << a[i] << ' ';
        }

        cout << '\n';

        int aux = a[0];
        for(int i = 0; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        a[n - 1] = aux;
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    
    return 0;
}