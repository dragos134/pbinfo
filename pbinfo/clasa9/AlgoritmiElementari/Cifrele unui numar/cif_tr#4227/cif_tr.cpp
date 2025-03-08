#include <iostream>

using namespace std;

int main()
{
    int n, m;
    bool ok = false;
    cin >> n >> m;
    while(n)
    {
        if(n % 10 + m % 10 > 9)
        {
            ok = true;
            break;
        }
        n /= 10;
        m /= 10;
    }
    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
}