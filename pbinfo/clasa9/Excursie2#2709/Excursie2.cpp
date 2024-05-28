#include <iostream>
using namespace std;

int main()
{
    int n, suma, suma_a;
    cin >> n;
    suma = n * (n + 1) / 2;

    if (suma % 3 || n < 5)
    {
        cout << "Imposibil";
        return 0;
    }

    suma_a = suma / 3;
    int i;
    if ((n + 1) % 6 == 0)
    {
        i = 5;
    }
    else
    {
        i = 6 + n % 6;
    }

    while (i < n)
    {
        cout << i + 1 << ' ' << i + 6;
        i = i + 6;
    }

    cout << endl;
}