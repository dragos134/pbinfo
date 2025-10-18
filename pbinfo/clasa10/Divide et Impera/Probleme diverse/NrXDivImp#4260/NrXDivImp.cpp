#include <iostream>
using namespace std;

int NrXDivImp(int a[], int st, int dr, int x)
{
    int mij = (st + dr) / 2;
    int rezSt = 0, rezDr = 0;
    if(dr - st > 0)
    {
        rezSt = NrXDivImp(a, st, mij, x);
        rezDr = NrXDivImp(a, mij + 1, dr, x);
    }
    else
    {
        if(a[st] == x)
        {
            return 1;
        }
    } 

    return rezSt + rezDr;
}

int main()
{
    int a[100] = {0, 2, 5, 1, 5, 3, 5, 5, 5, 7, 6};
    cout << NrXDivImp(a, 1, 6, 5);

    return 0;
}