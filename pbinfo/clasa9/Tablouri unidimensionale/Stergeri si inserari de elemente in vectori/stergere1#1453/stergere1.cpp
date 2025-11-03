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

    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            // stergere element
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