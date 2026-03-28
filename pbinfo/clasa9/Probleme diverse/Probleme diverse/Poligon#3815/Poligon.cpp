#include <iostream>

using namespace std;

int main()
{
    int a[1000000], n, ok = 1;
    long long s = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    s /= 2;

    for(int i = 0; i < n; i++)
    {
        if(a[i] >= s)
        {
            ok = 0;
            break;
        }
    }

    if(ok == 1)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}