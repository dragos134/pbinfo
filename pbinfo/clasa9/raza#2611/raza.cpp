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
    long long a, b, div_com, mult_com;
    cin >> a >> b;
    if(a < b)
    {
        swap(a, b);
    }
    div_com = cmmdc(a, b);
    mult_com = a / div_com * b;
    
}