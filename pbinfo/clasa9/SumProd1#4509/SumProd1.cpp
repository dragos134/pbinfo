#include <iostream>
using namespace std;

int main()
{
    int a, b, c, p1, p2, p3;
    cin >> a >> b >> c;
    p1 = a * b + c;
    p2 = a * c + b;
    p3 = b * c + a;

    if (p1 >= p2 && p1 >= p3)
    {
        cout << p1;
    }
    if (p2 >= p1 && p2 >= p3)
    {
        cout << p2;
    }
    if (p3 >= p2 && p3 >= p1)
    {
        cout << p3;
    }
    return 0;
}