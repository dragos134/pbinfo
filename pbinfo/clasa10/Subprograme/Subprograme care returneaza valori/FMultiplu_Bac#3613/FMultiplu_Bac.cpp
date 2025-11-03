#include <iostream>

using namespace std;

int multiplu(int n)
{
    int p = 1, cpyN = n, i = 2;
    for(i = 2; i <= n; i++)
    {
        int k = 0;
        while(n % i == 0)
        {
            n /= i;
            k++;
        }
        if(k > 0 && k % 2 == 1)
        {
            p *= i;
        }
    }
    return p * cpyN;
}

int main()
{
    cout << multiplu(13);
    return 0;
}