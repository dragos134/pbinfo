#include <iostream>

using namespace std;

int main()
{
    int n, x;
    short k = 0;
    cin >> n;
    while(n)
    {
        cin >> x;
        short cifMax = 0;
        while(x)
        {
            if(x % 10 > cifMax)
            {
                cifMax = x % 10;
            }
            x /= 10;
        }
        if(cifMax % 2)
        {
            k++;
        }
        n--;
    }
    cout << k;
    return 0;
}