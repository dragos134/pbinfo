#include <iostream>
using namespace std;


int main()
{
    int a, b;
    cin >> a >> b;

    if (a / 100 > b / 100)
    {
        cout << a / 100 * 10 + b / 100;
    }
    else
    {
        cout << b / 100 * 10 + a / 100;
    }
    cout << ' ';
    if (a / 10 % 10 > b / 10 % 10)
    {
        cout << a / 10 % 10 * 10 + b / 10 % 10;
    }
    else
    {
        cout << b / 10 % 10 * 10 + a / 10 % 10;
    }
    cout << ' ';
    if (a % 10 > b % 10)
    {
        cout << a % 10 * 10 + b % 10;
    }
    else
    {
        cout << b % 10 * 10 + a % 10;
    }
    cout << ' ';
    return 0;
}