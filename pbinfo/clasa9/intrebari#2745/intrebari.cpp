#include <iostream>
using namespace std;

int main()
{
    short n, t, p;
    int x, minx = 1000000001, maxx = 0;
    long long sum = 0;
    cin >> n >> t >> p;
    while(n)
    {
        n--;
        cin >> x;
        sum += x;
        if(p)
        {
            p--;
            if(x < minx)
            {
                minx = x;
            }
            if(x > maxx)
            {
                maxx = x;
            }
        }
    }
    short s = 0;
    if(t == 1)
    {
        while(minx)
        {
            s += minx % 10;
            minx /= 10;
        }
    }
    if(t == 2)
    {
        for(int i = 1; i * i <= maxx; i++)
        {
            if(maxx % i == 0)
            {
                s += 2;
            }
            if(i * i == maxx)
            {
                s--;
            }
        }
    }

    cout << s << endl << sum;
    return 0;
}