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

int ogldindit(int n)
{
    int og = 0;
    while(n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }
    return og;
}

int main()
{
    int n, x, cnt = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(cmmdc(ogldindit(x), x) == 1)
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}