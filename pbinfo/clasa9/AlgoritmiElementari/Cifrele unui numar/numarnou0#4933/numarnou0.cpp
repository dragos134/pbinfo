#include <iostream>

using namespace std;

int main()
{
    int n, s = 0, p = 1;
    cin >> n;
    while(n)
    {
        if(n % 2 == 1)
        {
            s = s + (n % 10) * p;
        }
        p *= 10;
        n /= 10;
    }
    cout << s;
    return 0;
}