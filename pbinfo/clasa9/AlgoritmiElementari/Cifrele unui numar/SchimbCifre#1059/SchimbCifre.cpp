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

long long schimbare_cifre(long long n, short i, short j)
{
    if(i == j)
    {
        return n;
    }
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

    int n_vec[11], cif = nr_cif(n);

    for(int i = cif; i > 0; i--)
    {
        n_vec[i] = n % 10;
        n /= 10; 
    }
    n = cpyn;

    do
    {
        for(short i = 0; i < m; i++)
        {
            int i1 = vec[i][0], i2 = vec[i][1];
            
            // schimbare cifre
            int aux = n_vec[i1];
            n_vec[i1] = n_vec[i2];
            n_vec[i2] = aux;
        }

        // reconstruire n
        n = 0;
        for(int i = 1; i <= cif; i++)
        {
            n = n * 10 + n_vec[i];
        }

        k++;
    }
    while(n != cpyn && k < t);
    
    r = t % k;

    for(long long j = 0; j < r; j++)
    {
        for(short i = 0; i < m; i++)
        {
            int i1 = vec[i][0], i2 = vec[i][1];
            // schimbare cifre
            int aux = n_vec[i1];
            n_vec[i1] = n_vec[i2];
            n_vec[i2] = aux;
        }
    }

    // reconstruire n
    n = 0;
    for(int i = 1; i <= cif; i++)
    {
        n = n * 10 + n_vec[i];
    }

    cout << n;

    return 0;
}