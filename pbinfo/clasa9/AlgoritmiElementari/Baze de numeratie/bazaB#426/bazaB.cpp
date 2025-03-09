#include <iostream>

using namespace std;

int main()
{
    int n, b, maxCif = 0;
    cin >> n >> b;
    while(n)
    {
        if(n % b > maxCif)
            maxCif = n % b;
        n /= b;
    }
    cout << maxCif;
    return 0;
}