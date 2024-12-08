#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 10)
    {
        cout << n * n;
    }
    if (n > 9 && n < 100)
    {
        cout << n / 10 + n % 10;
    }
    if (n > 99)
    {
        cout << n / 10 % 10;
    }
    return 0;
}