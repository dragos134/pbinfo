#include <iostream>

using namespace std;


short nr_cif(long long n)
{
    short cnt = 0;
    while(n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

int nrCifre(long long n)
{
    int nr = 0;
    while (n)
    {
        nr++;
        n /= 10;
    }
    return nr;
}

void schimbareCifre(long long &n, int a, int b)
{
    int i, nrA = 0, nrB = 0, nr = nrCifre(n);
    long long cpy = n, p = 1;
    i = nr;
    if (a>nr || b>nr)
        return;
    while (cpy)
    {
        if (i == a)
            nrB = cpy % 10;
        if (i == b)
            nrA = cpy % 10;
        i--;
        cpy /= 10;
    }
    i = nr;
    cpy = n;
    n = 0;
    while (cpy)
    {

        if (i == a)
            n = n + p * nrA;
        else
            if (i == b)
                n = n + p * nrB;
            else
                n = n + p * (cpy % 10);
        i--;
        p *= 10;
        cpy /= 10;
    }

}


long long schimbare_cifre(long long n, short i, short j)
{
    long long pi = 1, pj = 1, cpyn = 0, p = 1;
    short ci = 0, cj = 0, cifn = nr_cif(n);
    bool oki = false, okj = false;
    for(int k = cifn; k > 0; k--)
    {
        if(k == i)
        {
            oki = true;
            ci = n % 10;
        }
        if(k == j)
        {
            okj = true;
            cj = n % 10;
        }

        if(k != i && k != j)
        {
            cpyn = p * (n % 10) + cpyn;
        }

        if(!oki)
        {
            pi *= 10;
        }
        if(!okj)
        {
            pj *= 10;
        }
        
        n /= 10;
        p *= 10;
    }
    return cpyn + pj * ci + pi * cj;
}

int main()
{
    long long n, t, cpyn, k = 0, r = 0;
    short m, vec[10][2];
    cin >> n >> t >> m;
    cpyn = n;
    for(short i = 0; i < m; i++)
    {
        cin >> vec[i][0] >> vec[i][1];
    }

    do
    {
        for(short i = 0; i < m; i++)
        {
            n = schimbare_cifre(n, vec[i][0], vec[i][1]);
        }
        k++;
    }
    while(n != cpyn && k < t);
    
    r = t % k;

    for(long long j = 0; j < r; j++)
    {
        for(short i = 0; i < m; i++)
        {
            n = schimbare_cifre(n, vec[i][0], vec[i][1]);
        }
    }


    cout << n;

    return 0; 
}    
