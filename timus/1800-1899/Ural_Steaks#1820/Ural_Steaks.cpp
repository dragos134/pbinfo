#include <iostream>
using namespace std;

void schimba(int &a, int &b)
{
    int aux = a;
    a = b;
    b = aux;
}

int main()
{
    // int n, k;
    // cin >> n >> k;

    // if ((2 * n) % k == 0)
    // {
    //     cout << n * 2 / k;
    // }
    // else
    // {
    //     cout << n * 2 / k + 1;
    // }

    int n = 5, m = 10;
    schimba(n, m);

    cout << n <<  ' ' << m;

    return 0;
}