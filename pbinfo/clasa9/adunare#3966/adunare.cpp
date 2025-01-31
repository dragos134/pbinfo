#include <iostream>
using namespace std;

int main()
{
    long long a, b, cpya, cpyb;
    bool ok = true;
    cin >> a >> b;
    cpya = a;
    cpyb = b;
    while(a && b)
    {
        if(a % 10 + b % 10 > 9)
        {
            ok = false;
            break;
        }
        a /= 10;
        b /= 10;
    }
    if(ok)
    {
        printf("Gigel stie!");
    }
    else
    {
        printf("Gigel nu stie! El poate cumpara %lld bomboane!", cpya + cpyb);
    }
    return 0;
}