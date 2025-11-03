#include <iostream>
#include <math.h>
using namespace std;

int diviz(int n)
{
    for(int i = sqrt(n); i >= 1; i--)
    {
        if(n % (i * i) == 0)
        {
            return i * i;
        }
    }
    return 1;
}

int main()
{
    cout << diviz(72);
    return 0;
}