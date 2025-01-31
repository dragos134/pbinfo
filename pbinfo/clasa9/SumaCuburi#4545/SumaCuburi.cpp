#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long s = 0;
    for (int i = n; i > 0; i--)
    {
        s += i * i * i;
    }
    cout << s;
    return 0;
}