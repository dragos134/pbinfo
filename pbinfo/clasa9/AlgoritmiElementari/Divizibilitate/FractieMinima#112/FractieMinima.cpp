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
    int n, x, xmin = 1000000000, xmax = 0, comdiv;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(x < xmin)
        {
            xmin = x;
        }
        if(x > xmax)
        {
            xmax = x;
        }
    }
    comdiv = cmmdc(xmin, xmax);
    cout << xmin / comdiv << '/' << xmax / comdiv;
    return 0;
}