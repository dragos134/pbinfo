#include <iostream>
using namespace std;

int main()
{
    int k, x, xmin, xmax;
    cin >> k >> x;
    xmin = x;
    xmax = x;
    while(x)
    {
        if(x % 10 == k)
        {
            if(x > xmax)
            {
                xmax = x;
            }
            if(x < xmin)
            {
                xmin = x;
            }
        }
        cin >> x;
    }
    
    return 0;
}