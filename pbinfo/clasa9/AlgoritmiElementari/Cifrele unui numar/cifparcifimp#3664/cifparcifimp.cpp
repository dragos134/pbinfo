#include <iostream>
using namespace std;

int main()
{
    long long n, x, cif_imp = 0, cif_par = 0;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        if (x == 0)
        {
            cif_par++;
        }
        while (x)
        {
            cif_imp += x % 2;
            cif_par += 1 - x % 2;
            x /= 10;
        }
    }
    cout << cif_par << ' ' << cif_imp;
    return 0;
}