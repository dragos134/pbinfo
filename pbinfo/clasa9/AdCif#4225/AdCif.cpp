#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, cmax = 0;
    cin >> n;
    while(n)
    {
        if(n % 10 > cmax)
        {
            cmax = n % 10;
            s += cmax;
        }
        n /= 10;
    }
    cout << s;
    return 0;
}