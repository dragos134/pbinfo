#include <iostream>
using namespace std;

int main()
{
    int n, x;
    double mh, s = 0;
    cin >> n;
    mh = n;
    while (n)
    {
        n--;
        cin >> x;
        s += 1. / x;
    }
    printf("%.2f", (mh / s));
    return 0;
}