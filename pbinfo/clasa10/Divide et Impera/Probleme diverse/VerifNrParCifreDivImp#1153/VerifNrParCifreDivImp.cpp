#include <iostream>
using namespace std;

int NrCifre(int n)
{
    int cnt = 1;
    while(n > 9)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int NrParCifre(int a[], int st, int dr)
{
    if(st == dr)
    {
        return NrCifre(a[st]) % 2 == 0;
    }
    int mij = (st + dr) / 2;
    return NrParCifre(a, st, mij) && NrParCifre(a, mij + 1, dr);
}

int main()
{
    int a[100], n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(NrParCifre(a, 0, n - 1))
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}