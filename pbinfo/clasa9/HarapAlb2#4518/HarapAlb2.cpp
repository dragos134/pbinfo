#include <iostream>
using namespace std;

int main()
{
    int n, p, cif_ctrl, nr;
    cin >> n >> p;

    if (p == 1)
    {
        cif_ctrl = n % 10;
        if (cif_ctrl < 5)
        {
            nr = n / 10 * 10;
        }
        else
        {
            nr = (n / 10 + 1) * 10;
        }
    }
    else
    {
        cif_ctrl = n / 10 % 10;
        if (cif_ctrl < 5)
        {
            nr = n / 100 * 100;
        }
        else
        {
            nr = (n / 100 + 1) * 100;
        }
    }

    cout << nr;

    return 0;
}