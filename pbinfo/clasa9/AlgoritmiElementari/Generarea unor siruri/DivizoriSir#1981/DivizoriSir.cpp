#include <iostream>
using namespace std;

long long nr_div(long long n)
{
    long long cnt = 1, i;
    for(i = 2; i * i <= n; i++)
    {
        if (n % i == 0) {
            long long exponent = 0;
            while (n % i == 0) {
                n /= i;
                exponent++;
            }
            cnt *= (exponent + 1);
        }
    }
    if(n > 1)
    {
        cnt *= 2;
    }
    return cnt;
}

int main()
{
    long long t = 0, p = 1, n;
    cin >> n;
    while(n)
    {
        n--;
        unsigned long long nr = t * p + 1;
        cout << nr_div(nr) << ' ';
        t++;
        p *= 2;
    }

    return 0;
}