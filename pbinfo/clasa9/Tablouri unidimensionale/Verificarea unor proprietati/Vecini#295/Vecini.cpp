#include <iostream>

using namespace std;

int main()
{
    int n, x, prev_x1, prev_x2, ok = 0;
    cin >> n >> prev_x2 >> prev_x1;
    n -= 2;
    while(n)
    {
        n--;
        cin >> x;
        if((x + prev_x1) % 2 == 0 && (prev_x1 + prev_x2) % 2 == 0)
        {
            ok = 1;
        }
        prev_x2 = prev_x1;
        prev_x1 = x;
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