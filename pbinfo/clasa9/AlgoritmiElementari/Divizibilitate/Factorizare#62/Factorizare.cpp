#include <iostream>

using namespace std;

int main()
{
    int n, i = 2;
    cin >> n;
    while(i <= n)
    {
        int cnt = 0;
        if(n % i == 0)
        {
            cout << i << ' ';
            while(n % i == 0)
            {
                cnt++;
                n /= i;
            }
            cout << cnt << '\n';
        }
        i++;
        if(n > 1 && i * i > n)
        {
            i = n;
        }
    }
    return 0;
}