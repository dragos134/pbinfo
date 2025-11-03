#include <iostream>
#include <math.h>
using namespace std;

int este_prim(int n)
{
    if(n < 2)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }
    for(int i = 3; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int Moderat(int n)
{
    int st = sqrt(n);
    int pr1 = st, pr2 = st + 1;
    while(!este_prim(pr1))
    {
        pr1--;
    }
    while(!este_prim(pr2))
    {
        pr2++;
    }
    return pr1 * pr2 == n;
}

int main()
{
    cout << Moderat(55);
    return 0;
}