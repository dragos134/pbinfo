#include <iostream>
using namespace std;

int main()
{
    int l, c, s;
    cin >> l >> c;
    s = (l * (l - 1) / 2) % 9;
    s = (s + c) % 9;
    if (s == 0)
    {
        cout << 9;
    }
    else
    {
        cout << s;
    }
    return 0;
}