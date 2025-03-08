#include <iostream>

using namespace std;

int main()
{
    int a, b, s = 0, cpy;
    cin >> a >> b;

    if(a < b)
    {
        swap(a, b);
    }
    cout << b << ' ';
    while(a && b)
    {
        s += a / b;
        cpy = b;
        b = a % b;
        a = cpy;
    }

    cout << s;

    return 0;
}