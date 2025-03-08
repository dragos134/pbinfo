#include <iostream>
using namespace std;

int main()
{
    long long n, x, c = 0;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x;
        if (x > 9 && x < 100)
        {
            c++;
        }
    }
    cout << c;
    return 0;
}