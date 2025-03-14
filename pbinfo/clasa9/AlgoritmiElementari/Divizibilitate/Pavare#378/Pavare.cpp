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
    int a, b, c;
    cin >> a >> b;
    c = cmmdc(a, b);
    cout << (a / c) * (b / c) << ' ' << c;
    return 0;
}