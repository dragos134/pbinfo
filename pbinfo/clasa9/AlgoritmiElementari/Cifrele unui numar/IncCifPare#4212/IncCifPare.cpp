#include <iostream>

using namespace std;

int main()
{
    int n, cpyn, p = 1;
    cin >> n;
    cpyn = n;
    if(n == 0)
    {
        n = 1;
    }
    while(cpyn)
    {
        if(cpyn % 10 % 2 == 0)
        {
            n += p;
        }
        p *= 10;
        cpyn /= 10;
    }
    cout << n;
    return 0;
}