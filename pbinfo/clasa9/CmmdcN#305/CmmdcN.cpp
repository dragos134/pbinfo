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
    short n;
    int x, divc = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        divc = cmmdc(x, divc);
    }

    cout << divc;

    return 0;
}