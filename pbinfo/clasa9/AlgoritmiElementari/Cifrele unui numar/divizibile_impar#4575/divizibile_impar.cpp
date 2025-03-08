#include <iostream>

using namespace std;

bool divizibil(int n)
{
    int imp = 0, cpyn = n, p = 1;
    while(n)
    {
        if(n % 10 % 2 == 1)
        {
            imp = n % 10 * p + imp;
            p *= 10;
        }
        n /= 10;
    }
    if(imp == 0) return false;
    return !(cpyn % imp);
}

int main()
{
    int a, b;
    long long s = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if(divizibil(i))
        {
            s += i;
        }
    }
    cout << s;
    return 0;
}