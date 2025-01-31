#include <iostream>

using namespace std;

bool este_echilibrat(int n)
{
    short cifp = 0, cifi = 0;
    while(n)
    {
        if(n % 10 % 2 == 0)
        {
            cifp++;
        }
        else
        {
            cifi++;
        }
        n /= 10;
    }
    return cifi == cifp;
}

int main()
{
    int a, b;
    long long s = 0;
    cin >> a >> b;
    for(int i = a; i <= b; i++)
    {
        if(este_echilibrat(i))
        {
            s += i;
        }
    }
    cout << s;

    return 0;
}