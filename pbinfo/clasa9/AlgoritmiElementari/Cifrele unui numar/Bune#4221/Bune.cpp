#include <iostream>
using namespace std;

int main()
{
    int a, b, min1 = 10, min2 = 10, max1 = 0, max2 = 0;
    cin >> a >> b;

    while(a)
    {
        if(a % 10 > max1)
        {
            max1 = a % 10;
        }
        if(a % 10 < min1)
        {
            min1 = a % 10;
        }
        a /= 10;
    }

    while(b)
    {
        if(b % 10 > max2)
        {
            max2 = b % 10;
        }
        if(b % 10 < min2)
        {
            min2 = b % 10;
        }
        b /= 10;
    }

    if(min1 == max2)
    {
        cout << min1;
    }
    else if(min2 == max1)
    {
        cout << min2;
    }
    else
    {
        cout << "NU";
    }

    return 0;
}