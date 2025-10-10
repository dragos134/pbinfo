#include <iostream>
using namespace std;

void sumcif(int n, int &s, int &t)
{
    s = 0;
    t = 0;
    while(n)
    {
        int uCif = n % 10;
        if(uCif % 2)
        {
            t += uCif;
        }
        else
        {
            s += uCif;
        }
        n /= 10;
    }
}

int main()
{
    
    return 0;
}