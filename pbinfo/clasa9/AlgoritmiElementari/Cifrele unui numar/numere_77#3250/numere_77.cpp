#include <iostream>

using namespace std;

bool este_echilibrat(int n)
{
    short sump = 0, sumi = 0;
    while(n)
    {
        if(n % 2 == 0)
        {
            sump += n % 10;
        }
        else
        {
            sumi += n % 10;
        }
        n /= 10;
    }

    return sump == sumi;
}

int main()
{
    int a, b;
    long long s = 0;
    cin >> a >> b;

    for(int i = a; i <=b; i++)
    {
        if(este_echilibrat(i))
        {
            s += i;
        }
    }
    cout << s;

    return 0;
}