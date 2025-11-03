#include <iostream>

using namespace std;

int ascendent(int n, int x, int y)
{
    int s = 0, uc = n % 10;
    for(int i = x; i <= y; i++)
    {
        int ok = true, cpy = i;
        while(cpy)
        {
            if(cpy % 10 < uc)
            {
                ok = false;
                break;
            }
            cpy /= 10;
        }
        if(ok)
        {
            s += i;
        }
    }
    return s;
}

int main()
{
    cout << ascendent(827, 9, 800);
    return 0;
}