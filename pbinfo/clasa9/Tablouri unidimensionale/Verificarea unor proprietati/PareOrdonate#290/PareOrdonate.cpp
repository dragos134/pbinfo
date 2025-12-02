#include <iostream>

using namespace std;

int main()
{
    int n, x, ok = 1, prev_x_par = -10001;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(x % 2 == 0)
        {
            if(x < prev_x_par)
            {
                ok = 0;
            }
            prev_x_par = x;
        }
    }
    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}