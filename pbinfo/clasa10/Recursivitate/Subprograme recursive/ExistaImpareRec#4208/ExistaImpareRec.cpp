#include <iostream>

using namespace std;

int ExistaImpareRec(int n)
{
    if(n == 0)
    {
        return 0;
    }

    if(n % 2)
    {
        return 1;
    }

    return ExistaImpareRec(n / 10);
}

int main()
{
    return 0;
}