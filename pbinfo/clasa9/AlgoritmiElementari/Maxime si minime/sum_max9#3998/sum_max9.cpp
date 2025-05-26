#include <iostream>
using namespace std;

int main()
{
    long long n, x1, x2, sum = 0;
    cin >> n;
    while (n)
    {
        n--;
        cin >> x1 >> x2;
        sum += max(x1, x2);
    }
    cout << sum;
    return 0;
}