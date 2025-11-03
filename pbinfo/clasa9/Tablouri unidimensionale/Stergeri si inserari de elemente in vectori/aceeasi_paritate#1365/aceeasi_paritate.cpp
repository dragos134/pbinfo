#include <iostream>

using namespace std;

int main()
{
    long long a[200], n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if((a[i] + a[i + 1]) % 2 == 0)
        {
            int medie = (a[i] + a[i + 1]) / 2;
            //inserare
            n++;
            for(int j = n; j > i; j--)
            {
                a[j] = a[j - 1];
            }
            a[i + 1] = medie;
            i++;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}