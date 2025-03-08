#include <iostream>
using namespace std;

int main()
{
    long long n, x, s = 0;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        if (x > 9 && x < 100)
        {
            s += x;
        }
    }
    cout << s;
    return 0;
}