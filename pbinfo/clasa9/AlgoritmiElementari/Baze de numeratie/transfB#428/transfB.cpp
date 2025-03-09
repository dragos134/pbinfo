#include <iostream>

using namespace std;

int main()
{
    int b, n, x, nrb = 0;
    cin >> b >> n;
    while(n)
    {
        n--;
        cin >> x;
        nrb = b * nrb + x;
    }
    cout << nrb;
    return 0;
}