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
    int n, x1, x2, s1 = 0, s2 = 1, cmd;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x1 >> x2;
        s1 = s1 * x2 + x1 * s2;
        s2 = s2 * x2;
        cmd = cmmdc(s1, s2);
        s1 = s1 / cmd;
        s2 = s2 / cmd;
    }
    cout << s1 << ' ' << s2;

    return 0;
}