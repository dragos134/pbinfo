#include <iostream>
using namespace std;

int main()
{
    long long n, p, my_p = 1;
    cin >> p >> n;
    while (my_p <= n)
    {
        cout << my_p << ' ';
        my_p *= p;
    }
    return 0;
}