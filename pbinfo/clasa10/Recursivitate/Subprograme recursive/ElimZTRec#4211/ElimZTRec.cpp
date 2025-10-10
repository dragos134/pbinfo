#include <iostream>

using namespace std;

int ElimZTRec(int n)
{
    if(n % 10 == 0)
    {
        return ElimZTRec(n / 10);
    }
    return n;
}

int main()
{
    return 0;
}