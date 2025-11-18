#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int c1, c2;
    c1 = n / 100;
    c2 = m / 100;
    if(c1 > c2)
    {
        cout << c2 * 10 + c1;
    }
    else
    {
        cout << c1 * 10 + c2;
    }
    cout << ' ';
    c1 = n / 10 % 10;
    c2 = m / 10 % 10;
    if(c1 > c2)
    {
        cout << c2 * 10 + c1;
    }
    else
    {
        cout << c1 * 10 + c2;
    }
    cout << ' ';
    c1 = n % 10;
    c2 = m % 10;
    if(c1 > c2)
    {
        cout << c2 * 10 + c1;
    }
    else
    {
        cout << c1 * 10 + c2;
    }
    return 0;
}