#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            break;
        }
    }
    cout << i * i;
    return 0;
}