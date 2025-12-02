#include <iostream>

using namespace std;

int main()
{
    int n, x, og = 0, ok = 0;
    cin >> n >> x;
    n--;
    while(x)
    {
        og = 10 * og + x % 10;
        x /= 10;
    }
    while(n)
    {
        n--;
        cin >> x;
        if(x == og)
        {
            ok = 1;
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