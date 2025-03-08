#include <iostream>
using namespace std;

int main()
{
    int n, suma, suma_a;
    cin >> n;
    suma = n * (n + 1) / 2;

    if (suma % 3 || n < 5)
    {
        cout << "NU";
        return 0;
    }

    suma_a = suma / 3;
    int i, cpy_i;
    if ((n + 1) % 6 == 0)
    {
        i = 5;
    }
    else
    {
        i = 6 + n % 6;
    }
    cpy_i = i;

    // autobuz 1
    if(n % 6 == 5)
    {
        cout << 5 << ' ';
    }

    if(n % 6 == 0)
    {
        cout << 6 << ' ' << 1 << ' ';
    }

    if(n % 6 == 2)
    {
        cout << 8 << ' ' << 4 << ' ';
    }

    if(n % 6 == 3)
    {
        cout << 9 << ' ' << 6 << ' ';
    }

    while (i < n)
    {
        cout << i + 1 << ' ' << i + 6 << ' ';
        i = i + 6;
    }

    cout << endl;

    // autobuz 2

    if (n % 6 == 5)
    {
        cout << 2 << ' ' << 3 << ' ';
    }

    if (n % 6 == 0)
    {
        cout << 5 << ' ' << 2 << ' ';
    }

    if (n % 6 == 2)
    {
        cout << 7 << ' ' << 5 << ' ';
    }

    if (n % 6 == 3)
    {
        cout << 8 << ' ' << 7 << ' ';
    }

    i = cpy_i;
    while (i < n)
    {
        cout << i + 2 << ' ' << i + 5 << ' ';
        i = i + 6;
    }

    cout << endl;

    // autobuz 3

    if (n % 6 == 5)
    {
        cout << 1 << ' ' << 4 << ' ';
    }

    if (n % 6 == 0)
    {
        cout << 3 << ' ' << 4 << ' ';
    }

    if (n % 6 == 2)
    {
        cout << 1 << ' ' << 2 << ' ' << 3 << ' ' << 6 << ' ';
    }

    if (n % 6 == 3)
    {
        cout << 1 << ' ' << 2 << ' ' << 3 << ' ' << 4 << ' ' << ' ' << 5 << ' ';
    }

    i = cpy_i;
    while (i < n)
    {
        cout << i + 3 << ' ' << i + 4 << ' ';
        i = i + 6;
    }

    return 0;
}