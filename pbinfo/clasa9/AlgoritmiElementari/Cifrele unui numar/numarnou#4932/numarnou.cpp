#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, p = 1;
    cin >> n;
    while(n > 9)
    {
        int cif = abs(n % 10 - n / 10 % 10);
        s = s + cif * p;
        p *= 10;
        n /= 10;
    }

    cout << s;

    return 0;
}