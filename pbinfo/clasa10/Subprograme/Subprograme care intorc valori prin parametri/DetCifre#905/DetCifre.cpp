#include <iostream>
using namespace std;

void detcifre(int n, int &p, int &u)
{
    u = n % 10;
    while(n > 9)
    {
        n /= 10;
    }
    p = n;
}

int main()
{
    return 0;
}