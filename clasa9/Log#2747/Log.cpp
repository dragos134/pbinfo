#include <iostream>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    while (m > 1)
    {
        count++;
        m = m / n;
    }
    cout << count;
    return 0;
}