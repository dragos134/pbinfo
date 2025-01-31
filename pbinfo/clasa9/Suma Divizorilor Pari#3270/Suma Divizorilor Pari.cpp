#include <iostream>
using namespace std;

int main()
{
    int n;
    long long sum_div = 0;
    cin >> n;

    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i % 2 == 0)
            {
                sum_div += i;
            }
            
            if((n / i) % 2 == 0 && i != n / i)
            {
                sum_div += n / i;
            }
        }
    }

    cout << sum_div;
    return 0;
}