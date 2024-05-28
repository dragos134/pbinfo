#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, p, S;
    int r;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        cout << "Imposibil";
        return 0;
    }

    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));

    r = 25 * a * b * c / S;

    cout << r / 100 << '.' << r / 10 % 10 << r % 10;
    return 0;
}