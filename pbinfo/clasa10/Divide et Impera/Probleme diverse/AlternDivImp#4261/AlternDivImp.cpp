#include <iostream>
using namespace std;

int AlternDivImp(int a[], int st, int dr)
{
    int mij = (st + dr) / 2;
    int rezSt = 1, rezDr = 1;
    if(dr - st > 1)
    {
        rezSt = AlternDivImp(a, st, mij);
        rezDr = AlternDivImp(a, mij + 1, dr);
    }
    if(st == dr)
    {
        return 1;
    }

    if(rezSt == 0 || rezDr == 0)
    {
        return 0;
    }

    if(a[mij] % 2 - a[mij + 1] % 2 != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int a[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    cout << AlternDivImp(a, 1, 10);
    return 0;
}