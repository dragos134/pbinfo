#include <iostream>
using namespace std;

int main()
{
    unsigned long long x, n, s;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        s = x;
        if (x % 6 == 0)
        {
            s = s / 6;
        }
        if (x % 2 == 0 && x % 3 != 0)
        {
            s = s / 2;
        }
        if (x % 3 == 0 && x % 2 != 0)
        {
            s = s / 3;
        }
        if ((x + 1) % 6 == 0)
        {
            s = s * ((x + 1) / 6);
        }
        if ((x + 1) % 2 == 0 && (x + 1) % 3 != 0)
        {
            s = s * ((x + 1) / 2);
        }
        if ((x + 1) % 3 == 0 && (x + 1) % 2 != 0)
        {
            s = s * ((x + 1) / 3);
        }
        if ((x + 1) % 3 != 0 && (x + 1) % 2 != 0)
        {
            s = s * (x + 1);
        }

        if ((x + 2) % 3 == 0)
        {
            s = ((x + 2) / 3) * s;
        }
        else
        {
            s = s * (x + 2);
        }
        cout << s << ' ';
    }
    return 0;
}