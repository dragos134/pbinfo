#include <iostream>

using namespace std;

int main()
{
    int n, k, x, maxX = 0;
    bool ok = false;
    cin >> n >> k;
    while (n)
    {
        n--;
        cin >> x;
        if (x % k == 0 && x > maxX)
        {
            maxX = x;
            ok = true;
        }
    }
    if (ok)
    {
        cout << maxX;
    }
    else
    {
        cout << "NU EXISTA";
    }

    return 0;
}