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
    int n, a, b, cpyn, nr_cif = 0, p = 1;
    cin >> n;
    cpyn = n;
    while(n)
    {
        nr_cif++;
        n /= 10;
    }
    n = cpyn;
    for(int i = 0; i < nr_cif / 2; i++)
    {
        p *= 10;
    }
    b = n % p;
    if(nr_cif % 2)
    {
        p *= 10;
    }
    a = n / p;
    
    cout << cmmdc(a, b);
    return 0;
}