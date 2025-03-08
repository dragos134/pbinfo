#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, u;
    cin >> a >> b >> u;

    long c = 100 * sqrt(a * a + b * b - 2 * a * b * cos(u * M_PI / 180));

    cout << c / 100 << '.' << c / 10 % 10 << c % 10;
    return 0;
}