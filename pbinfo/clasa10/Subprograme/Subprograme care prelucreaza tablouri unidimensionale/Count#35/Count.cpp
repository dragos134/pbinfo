#include <iostream>

using namespace std;

int count(double a[100], int n)
{
    double ma = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        ma += a[i];
    }
    ma = ma / n;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= ma)
        {
            cnt++;
        }
    }
    return cnt;
}

int main()
{

    return 0;
}