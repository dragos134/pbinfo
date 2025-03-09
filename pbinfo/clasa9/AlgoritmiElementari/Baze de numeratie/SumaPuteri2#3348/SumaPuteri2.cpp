#include <iostream>

using namespace std;

int main()
{
    int n, p = 1;
    cin >> n;
    while(n)
    {
        if(n % 2 == 1)
        {
            cout << p << " ";
        }
        p *= 2;
        n /= 2;
    }
    return 0;
}