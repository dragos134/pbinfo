#include <iostream>

using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 1; i < n - 3; i++)
    {
        a[i] = a[i + 1];
    }

    a[n - 3] = a[n - 1];
    n -= 2;
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}