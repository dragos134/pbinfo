#include <iostream>

using namespace std;

int FiboRec(int x, int y)
{
    if(x == 1 && y == 1)
    {
        return 1;
    }
    if(y <= x)
    {
        return 0;
    }
    return FiboRec(y - x, x);
}

int main()
{
    return 0;
}