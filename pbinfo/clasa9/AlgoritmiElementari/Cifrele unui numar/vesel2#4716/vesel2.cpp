#include <iostream>

using namespace std;

int main()
{
    int n, cif = 0;
    cin >> n;

    while(n > 9)
    {
        cif++;
        n /= 10;
    }

    if(n != 9)
        cout << n + 1;
    else
        cout << 20;
    while(cif)
    {
        cout << 0;
        cif--;
    }
    return 0;
}