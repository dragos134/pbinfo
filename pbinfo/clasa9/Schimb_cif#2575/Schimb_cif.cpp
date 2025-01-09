#include <iostream>
using namespace std;


int main()
{
    short n, pc;
    long long x, og, p;
    cin  >> n;

    while(n)
    {
        n--;
        cin >> x;
        pc = x % 10;
        og = 0;
        p = 10;
        x /= 10;
        while(x > 9)
        {
            og = 10 * og + x % 10;
            p *= 10;
            x /= 10;
        }
        cout << p * (x % 10) + og * 10 + pc << ' ';
    }
    return 0;
}