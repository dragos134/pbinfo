#include <iostream>

using namespace std;

int CifDiferiteRec(int n, int k)
{
    if(n < 10)
    {
        return n != k;
    }
    return ((n % 10) != k) + CifDiferiteRec(n / 10, k);
}

int main()
{
    return 0;
}