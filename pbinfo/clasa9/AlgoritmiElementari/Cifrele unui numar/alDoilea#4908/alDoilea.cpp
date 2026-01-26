#include <iostream>

using namespace std;

int main()
{
    int n, max1 = 0, max2 = 0, min1 = 10, min2 = 10;
    cin >> n;
    while(n)
    {
        int uc = n % 10;
        if(uc > max2)
        {
            if(uc > max1)
            {
                max2 = max1;
                max1 = uc;
            }
            else
            {
                max2 = uc;
            }
        }

        if(uc < min2)
        {
            if(uc < min1)
            {
                min2 = min1;
                min1 = uc;
            }
            else
            {
                min2 = uc;
            }
        }
        n /= 10;
    }
    cout << max2 << ' ' << min2;
    return 0;
}