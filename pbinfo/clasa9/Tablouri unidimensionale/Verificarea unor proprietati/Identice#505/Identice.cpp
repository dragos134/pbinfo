#include <iostream>

using namespace std;

int main()
{
    int a[1000], b[1000], n, c[1000], ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        c[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == b[j] && c[j] == 0)
            {
                c[j] = 1;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        if(c[i] == 0)
        {
            ok = 0;
            break;
        }
    }

    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}