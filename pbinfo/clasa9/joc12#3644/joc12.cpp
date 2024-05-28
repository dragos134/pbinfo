#include <iostream>
using namespace std;

int main()
{
    long long x, a, b, y, c, d;
    long long ioana, maria, aux;
    cin >> x >> a >> b >> y >> c >> d;

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    ioana = b / x - a / x;
    if (!(a % x))
    {
        ioana++;
    }

    if (c > d)
    {
        aux = c;
        c = d;
        d = aux;
    }
    maria = d / y - c / y;
    if (!(c % y))
    {
        maria++;
    }

    if (ioana > maria)
    {
        cout << "Ioana " << ioana;
    }
    if (ioana < maria)
    {
        cout << "Maria " << maria;
    }
    if (ioana == maria)
    {
        cout << "Egalitate " << ioana;
    }

    return 0;
}