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
    int n, k, m, p, div_com, cls7, cls8;
    cin >> n >> k >> m >> p;
    div_com = cmmdc(n * k, m * p);
    cls7 = n * k / div_com;
    cls8 = m * p / div_com;
    cout << cls7 + cls8 << ' ' << cls7 << ' ' << cls8 << ' ' << div_com;
    return 0;
}