#include <iostream>

using namespace std;

int main()
{
    int n, x, prev_x, ok = 1;
    cin >> n >> prev_x;
    n--;
    while(n)
    {
        n--;
        cin >> x;
        if(x + prev_x == 2)
        {
            ok = 0;
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