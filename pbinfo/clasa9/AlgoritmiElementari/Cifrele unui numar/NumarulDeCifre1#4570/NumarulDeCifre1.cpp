#include <iostream>

using namespace std;

int main()
{
    int n, p = 0, i = 0;
    cin >> n;
    if (n == 0)
    {
        p++;
    }
    while(n)
    {
        if((n % 10) % 2)
        {
            i++;
        }
        else
        {
            p++;
        }
        n /= 10;
    }
    cout << p << ' ' << i;
    return 0;
}