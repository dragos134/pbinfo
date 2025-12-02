#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], pal = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    for(int i = 0; i < n / 2; i++)
    {
        if(a[i] != a[n - i - 1])
        {
            pal = 0;
            break;
        }
    }

    if(pal)
    {
        cout << "\nDA";
    }
    else
    {
        cout << "\nNU";
    }
    
    return 0;
}