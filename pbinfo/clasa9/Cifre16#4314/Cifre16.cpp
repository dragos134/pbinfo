#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0, p;
    cin >> n;
    p = n;
    while(p > 9)
    {
        p /= 10;
    }

    while(n > 9)
    {
        if(n % 10 < p)
        {
            cnt++;
        }
        n /=10;
    }
    cout << cnt;
    return 0;
}