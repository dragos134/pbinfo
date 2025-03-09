#include <iostream>

using namespace std;

int main()
{
    int n, x, cifMax = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        while(x)
        {
            if(x % 10 > cifMax)
                cifMax = x % 10;
            x /= 10;
        }
    }
    cout << cifMax + 1;
    return 0;
}