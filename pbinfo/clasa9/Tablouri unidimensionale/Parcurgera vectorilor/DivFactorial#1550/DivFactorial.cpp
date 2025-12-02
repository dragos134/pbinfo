#include <iostream>

using namespace std;

int main()
{
    int n, f = 1, a[12];
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        f *= i;
        cin >> a[i - 1];
    }

    for(int i = 0; i < n; i++)
    {
        if(f % a[i] == 0)
        {
            cout << a[i] << ' ';
        }
    }

    return 0;
}