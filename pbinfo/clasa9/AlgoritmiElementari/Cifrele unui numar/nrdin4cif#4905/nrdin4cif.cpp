#include <iostream>

using namespace std;

int main()
{
    int n, l;
    cin >> n;
    l = n % 100;
    while(n >= 100)
    {
        n /= 10;
    }
    cout << n << l;
    if(l == 0)
    {
        cout << 0;
    }
    return 0;
}