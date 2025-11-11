#include <iostream>

using namespace std;

int main()
{
    int n, frec[100001];
    cin >> n;
    long long s = 1LL * n * (n + 1) / 2;
    long long half_s = s / 2;
    for(int i = 1; i <= n; i++)
    {
        frec[i] = 1;
    }

    for(int i = n; i > 0; i--)
    {
        if(half_s - i >= 0 && frec[i] == 1)
        {
            half_s -= i;
            frec[i] = 0;
            cout << i << ' ';
        }
    }

    cout << '\n';

    for(int i = n; i > 0; i--)
    {
        if(frec[i] == 1)
        {
            frec[i] = 0;
            cout << i << ' ';
        }
    }

    return 0;
}