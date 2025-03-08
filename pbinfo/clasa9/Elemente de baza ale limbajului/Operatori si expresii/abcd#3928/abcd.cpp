#include <iostream>
using namespace std;

int main()
{
    long long a, b, c, d, n1, n2;
    cin >> a >> b >> c >> d;
    n1 = b / 3 - a / 3;
    if (a % 3 == 0)
    {
        n1++;
    }
    n2 = d / 3 - c / 3;
    if (c % 3 == 0)
    {
        n2++;
    }
    cout << n1 + n2;
    return 0;
}