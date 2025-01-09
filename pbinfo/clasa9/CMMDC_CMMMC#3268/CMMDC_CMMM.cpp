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
    long long a, b, cmd, cmc;
    cin >> a >> b;
    cmd = cmmdc(a, b);
    cmc = a / cmd * b;
    cout << cmd << ' ' << cmc;
    return 0;
}