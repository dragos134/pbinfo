#include <iostream>

using namespace std;

int main()
{
    long long n, s = 0;
    cin >> n;
    while(n)
    {
        s += n;
        n /= 10;
    }
    cout << s;
    return 0;
}