#include <iostream>
using namespace std;

int main()
{
    int n, k , x, cpyX, newX, p, cnt = 0;
    cin >> n >> k;
    while(n)
    {
        n--;
        cin >> x;
        cpyX = x;
        newX = 0;
        p = 1;
        while(x)
        {
            if(x % k == 1)
            {
                newX = newX + p;
            }
            p *= k;
            x /= k;
        }
        if(newX == cpyX)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}