#include <iostream>

using namespace std;

int main()
{
    int n, cmin = 10, cmax = 0;
    cin >> n;
    while(n)
    {
        int uc = n % 10;
        if(uc % 2 == 0 && uc > cmax)
        {
            cmax = uc;
        }
        if(uc % 2 == 1 && uc < cmin)
        {
            cmin = uc;
        }
        n /= 10;
    }
    cout << cmin * cmax;
    return 0;
}