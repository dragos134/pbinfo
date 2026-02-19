#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("divizori4.in");
ofstream fout("divizori4.out");

int ciur[33000], prime[33000], nr_prime = 0;

void init_ciur()
{
    ciur[0] = 1;
    ciur[1] = 1;
    for(int i = 2; i < 33000; i++)
    {
        if(ciur[i] == 0)
        {
            for(int j = 2 * i; j < 33000; j += i)
            {
                ciur[j] = 1;
            }
        }
    }

    for(int i = 0; i < 33000; i++)
    {
        if(ciur[i] == 0)
        {
            prime[nr_prime] = i;
            nr_prime++;
        }
    }
}

int nr_div(int nr)
{
    if(nr == 0)
    {
        return 0;
    }
    int i = 0, cnt = 1;
    while(prime[i] <= nr)
    {
        int k = 1;
        while(nr % prime[i] == 0)
        {
            nr /= prime[i];
            k++;
        }
        i++;
        cnt *= k;
        if(i == nr_prime)
        {
            if(nr > 1)
            {
                cnt *= 2;
            }
            break;
        }
    }

    return cnt;
}

int main()
{
    int n, c, p, a[50000], b[50000], z[50000];
    init_ciur();
    fin >> n >> c;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    fin >> p;
    if(c == 1)
    {
        fout << nr_div(a[p - 1]);
    }
    if(c == 2)
    {
        p--;
        for(int i = 0; i < n; i++)
        {
            b[i] = nr_div(a[i]);
            //fout << b[i] << ' ';
        }
        //fout << endl;
        int ic = 0;
        for(int i = 0; i < n; i++)
        {
            if(b[i] == b[p])
            {
                z[ic] = a[i];
                ic++;
            }
        }

        sort(z, z + ic);

        for(int i = ic - 1; i >= 0; i--)
        {
            fout << z[i] << ' ';
        }
    }
    return 0;
}