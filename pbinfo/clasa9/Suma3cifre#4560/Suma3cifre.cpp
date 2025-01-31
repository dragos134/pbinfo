#include <iostream>
using namespace std;

int main()
{
    int x, s = 0;
    cin >> x;
    while(x)
    {
        if (x > 99 && x < 1000 && x / 100 == x % 10)
        {
            s += x;
        }

        cin >> x;
    }
    cout << s;
    return 0;
}