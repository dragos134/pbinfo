#include <iostream>

using namespace std;

void P(int &n, int c)
{
    int pr = 1, ret = 0;
    while(n)
    {
        int uc = n % 10;
        if(uc != c)
        {
            ret = pr * uc + ret;
            pr *= 10;
        }
        n /= 10;
    }
    n = ret;
}

int main()
{
    int n = 22441252;
    P(n, 2);
    cout << n;
    return 0;
}