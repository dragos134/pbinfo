#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n;
    while (n)
    {
        cin >> x;
        if (int(cbrt(x)) * int(cbrt(x)) * int(cbrt(x)) == x)
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NU\n";
        }

        n--;
    }

    return 0;
}