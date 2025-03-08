#include <iostream>

using namespace std;

int main()
{
    int n;
    bool areZ = false, areU = false, ok = true;
    cin >> n;
    while(n)
    {
        int uc = n % 10;
        if(uc == 0)
        {
            areZ = true;
        }
        else if(uc == 1)
        {
            areU = true;
        }
        else
        {
            ok = false;
        }
        n /= 10;
    }

    if(areZ && areU && ok)
    {
        cout << "da";
    }
    else
    {
        cout << "nu";
    }
}