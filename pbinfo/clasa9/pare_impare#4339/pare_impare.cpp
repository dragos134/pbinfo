#include <iostream>
using namespace std;

int main()
{
    int a, b, c, nr_impare = 0;
    cin >> a >> b >> c;

    nr_impare = a % 2 + b % 2 + c % 2;
    if (nr_impare > 1)
    {
        cout << "impare";
    }
    else
    {
        cout << "pare";
    }
    return 0;
}