#include <iostream>

using namespace std;

int main()
{
    int n, cpyn, c, cnt = 0;
    cin >> n;
    cpyn = n;
    while(n > 99)
    {
        n /= 10;
    }
    c = n % 10;
    n = cpyn;
    while(n)
    {
        if(n % 10 > c)
        {
            cnt++;
        }
        n /= 10;
    }
    cout << cnt;
    return 0;
}