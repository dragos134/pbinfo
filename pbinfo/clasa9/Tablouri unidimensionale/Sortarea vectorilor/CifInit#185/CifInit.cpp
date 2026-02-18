#include <iostream>

using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        while(a[i] > 9)
        {
            a[i] /= 10;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }
    return 0;
}