#include <iostream>

using namespace std;

void sum_div_prim(int n, int &sum)
{
    sum = 0;
    int i = 3;
    if(n % 2 == 0)
    {
        sum = 2;
        while(n % 2 == 0)
        {
            n /= 2;
        }
    }
    while(i <= n)
    {
        if(n % i == 0)
        {
            sum += i;
            while(n % i == 0)
            {
                n /= i;
            }
        }

        i += 2;

        if(n > 1 && i * i > n)
        {
            i = n;
        }
    }
}

int main()
{
    int sum;
    sum_div_prim(1999999999, sum);
    cout << sum;
    return 0;
}