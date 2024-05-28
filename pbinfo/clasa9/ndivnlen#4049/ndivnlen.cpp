#include <iostream>

using namespace std;

int main()
{
    int n, cpy, nr_cif = 0;
    cin >> n;
    cout << n;
    cpy = n;
    while (cpy)
    {
        cpy /= 10;
        nr_cif++;
    }
    for (int i = 0; i < n - nr_cif; i++)
    {
        cout << 0;
    }
    return 0;
}