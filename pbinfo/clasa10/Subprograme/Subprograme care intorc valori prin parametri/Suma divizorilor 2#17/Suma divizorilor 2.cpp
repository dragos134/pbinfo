#include <iostream>

using namespace std;

void sum_div(int n, int &sum)
{
    int i = 0;
    sum = n + 1;
    for(i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i + n / i;
        }
    }
    if(i * i == n)
    {
        sum += i;
    }
}

int main()
{

    return 0;
}