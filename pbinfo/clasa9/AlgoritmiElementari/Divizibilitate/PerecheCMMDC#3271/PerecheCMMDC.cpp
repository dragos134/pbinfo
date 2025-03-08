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
    int n, a, b, div_max = 0, dcom, p1max = 0, p2max = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> a >> b;
        dcom = cmmdc(a, b);
        if((dcom > div_max) || (dcom == div_max && (a + b) > (p1max + p2max)))
        {
            div_max = dcom;
            p1max = a;
            p2max = b;
        }
    }

    cout << p1max << ' ' << p2max;
    return 0;
}