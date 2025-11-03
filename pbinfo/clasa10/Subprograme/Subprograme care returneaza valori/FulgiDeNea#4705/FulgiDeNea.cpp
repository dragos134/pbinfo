#include <iostream>

using namespace std;

int Fulg(int n)
{
    int cnt = 0, frec[4], cpyN = n;
    while(cpyN)
    {
        cnt++;
        int uc = cpyN % 10;
        if(uc < 1 || uc > 4)
        {
            return 0;
        }
        frec[uc - 1] = 1;
        cpyN /= 10;
    }
    int s = frec[0] + frec[1] + frec[2] + frec[3];
    if(cnt == 9 && s == 4)
    {
        return 1;
    }
    return 0;
}

int main()
{
    cout << Fulg(111124423);
    return 0;
}