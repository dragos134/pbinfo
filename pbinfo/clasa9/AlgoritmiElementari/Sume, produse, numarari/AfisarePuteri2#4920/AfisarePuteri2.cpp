#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        long long p = 1;
        for(int j = 1; j <= i; j++)
        {
            p = p * i;
        }
        cout << p << ' ';
    }
    return 0;
}