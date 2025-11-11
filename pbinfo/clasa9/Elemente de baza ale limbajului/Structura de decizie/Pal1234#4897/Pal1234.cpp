#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n < 10)
    {
        cout << "DA";
    }

    if(n > 9 && n < 100)
    {
        if(n / 10 == n % 10)
        {
            cout << "DA";
        }
        else
        {
            cout <<"NU";
        }
    }

    if(n > 99 && n < 1000)
    {
        if(n / 100 == n % 10)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }

    if(n > 999 & n < 10000)
    {
        if(n / 1000 == n % 10 && n / 100 % 10 == n / 10 % 10)
        {
            cout << "DA";
        }
        else
        {
            cout << "NU";
        }
    }

    return 0;
}