#include <iostream>

using namespace std;

int CifEgaleRec(int n, int k)
{
    if(n < 10)
    {
        return n == k;
    }
    if((n % 10) != k)
    {
        return 0;
    }
    return CifEgaleRec(n / 10, k);
}

int main()
{
    return 0;
}