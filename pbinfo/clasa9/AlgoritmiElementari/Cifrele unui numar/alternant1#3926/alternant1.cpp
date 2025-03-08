#include <iostream>

using namespace std;

int main()
{
    long long n;
    bool ok = true;
    cin >> n;
    while(n > 9)
    {
        int uc = n % 10, pc = n / 10 % 10;
        if((uc + pc) % 2 == 0)
        {
            ok = false;
        }
        n /= 10;
    }
    if(ok)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
    return 0;
}