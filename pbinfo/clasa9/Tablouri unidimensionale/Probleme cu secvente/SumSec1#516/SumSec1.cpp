#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], pi = 0, ui, s = 0;
    cin >> n;
    ui = n - 1;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while(a[pi] % 2 == 0)
    {
        pi++;
    }
    while(a[ui] % 2 == 0)
    {
        ui--;
    }
    for(int i = pi; i <= ui; i++)
    {
        s = s + a[i];
    }
    cout << s;
    return 0;
}