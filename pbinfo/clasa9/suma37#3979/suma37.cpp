#include <iostream>

using namespace std;

int main()
{
    int n, s = 0;
    cin >> n;
    while(n)
    {
        if(n % 10 > 2 && n % 10 < 8)
        {
            s += n % 10;
        }
        n/= 10;
    }
    cout << s;
    return 0;
}