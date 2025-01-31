#include <iostream>

using namespace std;

int main()
{
    long long n;
    int s = 0, cif = 0;
    cin >> n;
    while(n)
    {
        s += n % 10;
        n /= 10;
    }

    while(s)
    {
        cif++;
        s /= 10;
    }

    cout << cif;
    return 0;
}