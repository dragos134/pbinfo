#include <iostream>

using namespace std;

int main()
{
    int a[1000], n, ok = 1;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cout << a[i] << ' ';
    }

    cout << '\n';

    while(ok)
    {
        ok = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if((a[i] + a[i + 1]) % 2 == 0 && a[i] != a[i + 1])
            {
                int medie = (a[i] + a[i + 1]) / 2;
                // inserare
                n++;
                for(int j = n; j > i; j--)
                {
                    a[j] = a[j - 1];
                }
                i++;
                a[i] = medie;
                ok = 1;
            }
        }

        if(ok)
        {
            for(int i = 0; i < n; i++)
            {
                cout << a[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}