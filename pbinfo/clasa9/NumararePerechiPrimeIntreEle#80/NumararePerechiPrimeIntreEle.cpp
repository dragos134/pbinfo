#include <iostream>
using namespace std;
long long cmmdc(long long a, long long b)
{
    long long cpy;
    if(a < b)
    {
        swap(a, b);
    }

    while(a && b)
    {
        cpy = b;
        b = a % b;
        a = cpy;
    }

    return a + b;
}
int main()
{
    int x, xl, cnt = 0;
    cin >> xl;
    cin >> x;
    while(x)
    {
        if(cmmdc(xl, x) == 1)
        {
            cnt++;
        }
        xl = x;
        cin >> x;
    }
    cout << cnt;

    return 0;
}