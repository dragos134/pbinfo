#include <iostream>
using namespace std;

int main()
{
    int a, b, cifra_zecilor_a, cifra_zecilor_b;
    cin >> a >> b;
    cifra_zecilor_a = a / 10 % 10;
    cifra_zecilor_b = b / 10 % 10;
    if (cifra_zecilor_a == cifra_zecilor_b)
    {
        cout << a + b;
    }
    else
    {
        if (cifra_zecilor_a > cifra_zecilor_b)
        {
            cout << a;
        }
        else
        {
            cout << b;
        }
    }
    return 0;
}