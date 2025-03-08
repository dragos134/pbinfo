#include <iostream>
using namespace std;
int main()
{
    long long n, k, x, s = 0, c = 0;
    cin >> n >> k;
    while (n)
    {
        n--;
        cin >> x;
        if (x % 2)
        {
            s += x;
        }
        if (x % k == 0)
        {
            c++;
        }
    }
    cout << s << ' ' << c;
    return 0;
}