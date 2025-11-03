#include <iostream>

using namespace std;

int sum_div(int n)
{
    int s = 0, i = 1;
    for(i = 1; i * i < n; i++)
    {
        if(n % i == 0)
        {
            s = s + i + n / i;
        }
    }
    if(i * i == n)
    {
        s += i;
    }
    return s;
}

int kpn(int a, int b, int k)
{
    for(int i = a; i <= b; i++)
    {
        int sum = sum_div(i);
        if(sum % 2 == i % 2)
        {
            k--;
        }
        if(k == 0)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cout << kpn(27, 50, 3);
    return 0;
}