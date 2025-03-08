#include <iostream>
using namespace std;

int main()
{
    long long n, max3 = 0;
    cin >> n;
    while(n > 99)
    {
        int nr = n % 1000;
        if (nr > max3)
        {
            max3 = nr;
        }
        n /= 10;
    }
    cout << max3;
    return 0;
}