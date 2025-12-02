#include <iostream>

using namespace std;

int main()
{
    long long n, x, s = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        s += x;
    }
    cout << s * (s - 1) / 2;
    return 0;
}