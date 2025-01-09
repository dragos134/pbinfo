#include <iostream>

using namespace std;

int main()
{
    int n, cpmax = -1, cimin = 10;
    cin >> n;
    if (n == 0)
    {
        cpmax = 0;
    }
    while(n)
    {
        int u = n % 10;
        if(u % 2 && u < cimin)
        {
            cimin = u;
        }
        if(u % 2 == 0 && u > cpmax)
        {
            cpmax = u;
        }
        n /= 10;
    }
    cout << cpmax << ' ';
    if(cimin == 10)
    {
        cout << -1;
    }
    else
    {
        cout << cimin;
    }
    return 0;
}