#include <iostream>

using namespace std;

int main()
{
    int n, a[100], ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] % a[n - 1])
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