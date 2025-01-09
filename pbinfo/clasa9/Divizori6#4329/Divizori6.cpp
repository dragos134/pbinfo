#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            s = s + i + n / i;
            break;
        }
    }
    cout << s;
    return 0;
}