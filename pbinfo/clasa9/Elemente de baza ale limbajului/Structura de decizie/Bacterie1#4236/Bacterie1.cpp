#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    if (n > m)
    {
        cout << m * n - m * (m + 1) / 2;
    }
    else
    {
        cout << m * n - n * (n + 1) / 2;
    }
}