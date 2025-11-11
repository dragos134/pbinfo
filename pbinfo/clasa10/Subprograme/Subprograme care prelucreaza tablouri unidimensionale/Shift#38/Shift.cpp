#include <iostream>

using namespace std;

void shift(int x[100], int n)
{
    int aux = x[0];
    for(int i = 0; i < n - 1; i++)
    {
        x[i] = x[i + 1];
    }
    x[n - 1] = aux;
}

int main()
{
    
    return 0;
}