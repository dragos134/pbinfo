#include <iostream>
using namespace std;

int main()
{
    int k, n, x, s = 0;
    cin >> k >> n;
    while (n)
    {
        n--;
        cin >> x;
        s = s + x - k;
        if (s < 0)
        {
            s = 0;
        }
    }
    cout << s;
    return 0;
}