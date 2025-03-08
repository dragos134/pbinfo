#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double ab, bc, cd, ad, aux, h;
    cin >> ab >> bc >> cd >> ad;

    if (ab < cd)
    {
        aux = ab;
        ab = cd;
        cd = aux;
    }

    if ((ab - cd) + ad < bc || (ab - cd) + bc < ad || bc + ad < (ab - cd))
    {
        cout << "Imposibil";
        return 0;
    }

    double p = (bc + ad + ab - cd) / 2;
    double arie_triunghi = sqrt(p * (p - bc) * (p - ad) * (p - (ab - cd)));
    h = 2 * arie_triunghi / (ab - cd);

    long a = 100 * h * (ab + cd) / 2;
    if (a <= 0)
    {
        cout << "Imposibil";
        return 0;
    }
    cout << a / 100 << '.' << a / 10 % 10 << a % 10;
    return 0;
}