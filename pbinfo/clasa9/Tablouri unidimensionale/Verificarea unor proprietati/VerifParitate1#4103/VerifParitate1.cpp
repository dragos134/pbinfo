#include <iostream>

using namespace std;

int main()
{
    int n, a[200], ok = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n / 2; i++)
    {
        if((a[i] + a[n - i - 1]) % 2)
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