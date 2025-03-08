#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(x == 0)
        {
            cnt++;
        }
        while(x)
        {
            if (x % 10 == 0)
            {
                cnt++;
                break;
            }
            x /= 10;
        }
    }
    cout << cnt;
    return 0;
}