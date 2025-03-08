#include <iostream>
using namespace std;

int main()
{
    int x, s = 0;
    short n, k;
    bool ok = false;

    cin >> n >> k;
    if(n == 0 && k == 0)
    {
        ok = true;
    }
    while(n)
    {
        cin >> x;
        int currS = 0;
        while(x > 9)
        {
            currS += x % 10;
            x /= 10;
        }
        if(x == k)
        {
            currS += x;
            s += currS;
            ok = true;
        }
        n--;
    }
    if(ok)
        cout << s;
    else
        cout << -1;
    return 0;
}