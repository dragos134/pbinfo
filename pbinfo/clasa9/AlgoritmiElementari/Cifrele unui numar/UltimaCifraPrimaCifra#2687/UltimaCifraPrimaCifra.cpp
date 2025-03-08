#include <iostream>

using namespace std;

int main()
{
    int n, x, ucif, pcif, ux;
    cin >> n;
    cin >> x;
    ucif = x % 10;
    ux = x;
    n--;
    while(n)
    {
        n--;
        cin >> x;
        int cpy = x;
        while(x > 9)
        {
            x /= 10;
        }
        if(ucif == x)
        {
            cout << ux << ' ' << cpy << endl;
        }
        ucif = cpy % 10;
        ux = cpy;
    }
    
    return 0;
}