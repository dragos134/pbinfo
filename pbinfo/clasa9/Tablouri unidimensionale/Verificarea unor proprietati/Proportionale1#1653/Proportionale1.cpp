#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, a[100], b[100], k, ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    k = a[0] * b[n - 1];
    for(int i = 1; i < n; i++)
    {
        if(k != a[i] * b[n - i - 1])
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