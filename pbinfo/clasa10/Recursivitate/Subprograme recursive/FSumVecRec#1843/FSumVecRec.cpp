#include <iostream>

using namespace std;

int suma(int v[], int n, int i, int j)
{
    if(i == 1)
    {
        if(j == n)
        {
            return 0;
        }
        if(n == j + 1)
        {
            return v[n];
        }
    }
    else
    {
        if(n == 1)
        {
            return v[n];
        }
    }
    
    if(n >= i && n <= j)
    {
        return suma(v, n - 1, i, j);
    }
    return v[n] + suma(v, n - 1, i, j);
}

int main()
{
    int a[100] = {0, 12, 7, 6, 3, 8, 5}, n, i, j;
    cout << suma(a, 2, 1, 2);
    return 0;
}