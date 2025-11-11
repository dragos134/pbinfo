#include <iostream>

using namespace std;

void F(int n, int a[], int &k)
{
    k = 0;
    int ok = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            ok = true;
            k = k * 10 + a[i];
        }
    }
    if(!ok)
    {
        k = -1;
    }
}

int main()
{

    return 0;
}