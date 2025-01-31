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
    int a, b, c, d, s1, s2, p1;
    int cmds, cmdp;
    cin >> a >> b >> c >> d;
    s1 = a * d + c * b;
    s2 = b * d;
    p1 = a * c;
    cmds = cmmdc(s1, s2);
    cmdp = cmmdc(p1, s2);
    
    cout << s1 / cmds << ' ' << s2 / cmds << endl << p1 / cmdp << ' ' << s2 / cmdp;
    return 0;
}