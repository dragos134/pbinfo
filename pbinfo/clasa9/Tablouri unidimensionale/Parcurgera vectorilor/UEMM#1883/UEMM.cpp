#include <iostream>

using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        int ok = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] > a[i])
            {
                a[i] = a[j];
                ok = 1;
                break;
            }
        }
        if(!ok)
        {
            a[i] = -1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}