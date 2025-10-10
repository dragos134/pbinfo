#include <iostream>

using namespace std;

void Matrix(int a[300][300], int n, int L[], int C[], int k)
{
    for(int i = 0; i < k; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[L[i]][j] = 1 - a[L[i]][j];
        }
        for(int j = 0; j < n; j++)
        {
            a[j][C[i]] = 1 - a[j][C[i]];
        }
    }
}

int main()
{
    return 0;
}