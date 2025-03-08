#include <iostream>

using namespace std;

int main()
{
    int n, x, cnt = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        int cif = 0;
        if (x == 0)
        {
            cif = 1;
        }
        while(x)
        {
            cif++;
            x /= 10;
        }

        if(cif % 2)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}