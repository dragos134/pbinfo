#include <iostream>
using namespace std;

int oglindit(int n)
{
    int og = 0;
    while(n)
    {
        og = og * 10 + n % 10;
        n /= 10;
    }
    return og;
}

int main()
{
    short n;
    int x, i;
    long long s = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        x = oglindit(x);
        for(i = 1; i * i < x; i++)
        {
            if(x % i == 0)
            {
                s = s + i + x / i;
            }
        }
        if(i * i == x)
        {
            s += i;
        }
    }
    cout << s;
    return 0;
}