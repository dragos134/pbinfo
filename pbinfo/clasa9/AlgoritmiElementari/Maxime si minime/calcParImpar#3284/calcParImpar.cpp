#include <iostream>
using namespace std;

int main()
{
    int n, x, xmax = 0, xmin = 100;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        if(i % 2)
        {
            if(x < 100 && x > 9 && x < xmin)
            {
                xmin = x;
            }
        }
        else
        {
            if(x > xmax)
            {
                xmax = x;
            }
        }
    }
    cout << xmax << ' ';
    if(xmin == 100)
    {
        cout << -1;
    }
    else
    {
        cout << xmin;
    }
    return 0;
}