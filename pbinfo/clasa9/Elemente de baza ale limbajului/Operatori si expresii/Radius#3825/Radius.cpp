#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n, l;
    cin >> n >> l;

    long r = 100 * l / (2 * sin(M_PI / n));

    cout << r / 100 << '.' << r / 10 % 10 << r % 10;
    return 0;
}