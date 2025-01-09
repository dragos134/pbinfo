#include <iostream>

using namespace std;

int main()
{
    int a, b, c = 0, p = 1;
    cin >> a >> b;
    while(a)
    {
        c = p * ((a % 10 + b % 10) / 2) + c;
        p *= 10;
        a /= 10;
        b /= 10;
    }
    cout << c;
    return 0;
}