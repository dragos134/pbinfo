#include <iostream>
using namespace std;

int main()
{
    int n, k;
    bool ok = true;
    cin >> n >> k;

    while(n)
    {
        if(n % 10 > k)
        {
            ok = false;
            break;
        }
        n /= 10;
    }
    if(ok)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}