#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, mp;
    long long s = 0, x;
    cin >> n;
    mp = n;
    while (n)
    {
        n--;
        cin >> x;
        s = s + x * x;
    }
    cout << fixed;
    cout << setprecision(2);
    cout << sqrt(s) / sqrt(mp);
    return 0;

}