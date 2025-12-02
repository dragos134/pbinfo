#include <iostream>
using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    //verificare constant
    int constant = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != a[i + 1])
        {
            constant = 0;
            break;
        }
    }

    if(constant)
    {
        cout << "sir constant";
        return 0;
    }

    // verificare crescator / strict crescator
    int strict = 1, ord = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            strict = 0;
        }
        if(a[i] > a[i + 1])
        {
            ord = 0;
            break;
        }
    }

    if(ord)
    {
        if(strict)
        {
            cout << "sir strict crescator";
        }
        else
        {
            cout << "sir crescator";
        }
        return 0;
    }

    // verificare descrescator / strict descrescator
    strict = 1;
    ord = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            strict = 0;
        }
        if(a[i] < a[i + 1])
        {
            ord = 0;
        }
    }

    if(ord)
    {
        if(strict)
        {
            cout << "sir strict descrescator";
        }
        else
        {
            cout << "sir descrescator";
        }

        return 0;
    }

    cout << "sir neordonat";

    return 0;
}