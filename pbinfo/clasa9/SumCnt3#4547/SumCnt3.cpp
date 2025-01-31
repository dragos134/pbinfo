#include <iostream>
using namespace std;

int main()
{
    int n, k, x, divk = 0, nrpar = 0;
    cin >> n >> k;
    while(n)
    {
        n--;
        cin >> x;
        if(x % 2 == 0)
        {
            nrpar++;
        }
        if(x % k == 0)
        {
            divk += x;
        }
    }
    cout << divk << ' ' << nrpar;
    return 0;
}