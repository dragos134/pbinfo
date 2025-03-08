#include <iostream>

using namespace std;

bool este_prim(int n)
{
    if(n == 1)
    {
        return false;
    }
    if(n == 2)
    {
        return true;
    }
    if(n % 2 == 0)
    {
        return false;
    }

    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    if(este_prim(n))
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}