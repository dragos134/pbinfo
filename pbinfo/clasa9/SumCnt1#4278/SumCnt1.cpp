#include <iostream>
using namespace std;

int main()
{
    long long n, s = 0, c = 0;
    while (cin >> n)
    {
        if (n % 2 == 0)
        {
            s += n;
        }

        if (n > 9 && n < 100)
        {
            c++;
        }
    }

    cout << s << ' ' << c;
    return 0;
}