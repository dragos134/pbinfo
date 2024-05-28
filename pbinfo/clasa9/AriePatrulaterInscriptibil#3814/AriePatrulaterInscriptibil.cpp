#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double ab, bc, cd, ad, p;
    cin >> ab >> bc >> cd >> ad;
    p = (ab + bc + cd + ad) / 2;
    long s = 1000 * sqrt((p - ab) * (p - bc) * (p - cd) * (p - ad));
    cout << s / 1000 << '.' << s / 100 % 10 << s / 10 % 10 << s % 10;
    return 0;
}