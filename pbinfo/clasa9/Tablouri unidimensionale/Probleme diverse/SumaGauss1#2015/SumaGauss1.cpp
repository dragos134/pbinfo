#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sumagauss1.in");
ofstream fout("sumagauss1.out");

const unsigned int MAX = 50;

class BigNumber
{
    private:
        unsigned long long len;
        unsigned long long cif[MAX];
    
    public:
        BigNumber()
        {
            len = 1;
            for(int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
        }
        BigNumber(short n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }
        BigNumber(unsigned short n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }
        BigNumber(int n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }
        BigNumber(unsigned int n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }
        BigNumber(long long n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }
        BigNumber(unsigned long long n)
        {
            for(unsigned int i = 0; i < MAX; i++)
            {
                cif[i] = 0;
            }
            if(n == 0)
            {
                len = 1;
                return;
            }
            while(n)
            {
                cif[len++] = n % 10;
                n /= 10;
            }
        }

};

struct NrMare
{
    long long cif[MAX];
    int len;
};


void finisare(NrMare &nb)
{
    for(int i = 0; i < nb.len - 1; i++)
    {
        long long carry = nb.cif[i] / 10;
        nb.cif[i] = nb.cif[i] % 10;
        nb.cif[i + 1] += carry;
    }
    while(nb.cif[nb.len - 1] > 9)
    {
        long long carry = nb.cif[nb.len - 1] / 10;
        nb.cif[nb.len - 1] = nb.cif[nb.len - 1] % 10;
        nb.cif[nb.len] += carry;
        nb.len++;
    }
}

void init_big(NrMare &nb)
{
    for(int i = 0; i < MAX; i++)
    {
        nb.cif[i] = 0;
    }
    nb.len = 1;
}

void init_big_int(NrMare &nb, long long n)
{
    for(int i = 0; i < MAX; i++)
    {
        nb.cif[i] = 0;
    }
    nb.len = 1;
    nb.cif[0] = n;
    finisare(nb);
}

void init_big_big(NrMare &nb_dest, NrMare nb_source)
{
    nb_dest.len = nb_source.len;
    for(int i = 0; i < MAX; i++)
    {
        nb_dest.cif[i] = 0;
    }
    for(int i = 0; i < nb_source.len; i++)
    {
        nb_dest.cif[i] = nb_source.cif[i];
    }
}
void sum_int1(NrMare nb, unsigned int n, NrMare &rez)
{
    rez.len = nb.len;
    int i = 0, c = 0;
    while(n)
    {
        short uc = n % 10;
        rez.cif[i] = (nb.cif[i] + uc) % 10 + c;
        c = (nb.cif[i] + uc) / 10;
        i++;
        n /= 10;
    }
    rez.len = max(i, nb.len);
    for(int k = i; k < nb.len; k++)
    {
        rez.cif[k] = nb.cif[k];
    }
}

void sum_int2(NrMare nb, long long b, NrMare &rez)
{
    rez.cif[0] = nb.cif[0] + b;
    rez.len = nb.len;
    for(int i = 1; i < nb.len; i++)
    {
        rez.cif[i] = nb.cif[i];
    }
    finisare(rez);
}

void sum_big(NrMare nb1, NrMare nb2, NrMare &rez)
{
    rez.len = max(nb1.len, nb2.len);

    for(int i = 0; i < rez.len; i++)
    {
        rez.cif[i] = nb1.cif[i] + nb2.cif[i];
    }

    finisare(rez);
}

void prod_int(NrMare nb, long long n, NrMare &rez)
{
    rez.len = nb.len;
    for(int i = 0; i < nb.len; i++)
    {
        rez.cif[i] = nb.cif[i] * n;
    }
    finisare(rez);
}

void prod_big(NrMare nb1, NrMare nb2, NrMare &rez)
{
    rez.len = nb1.len + nb2.len - 1;
    for(int i = 0; i < nb1.len; i++)
    {
        for(int j = 0; j < nb2.len; j++)
        {
            rez.cif[i + j] += nb1.cif[i] * nb2.cif[j];
        }
    }
    finisare(rez);
}

int Divide(NrMare x, long long n, NrMare &rez)
//x = x /n, returneaza x%n
{
  long long i, r = 0;
  rez.len = x.len;
  for(i = x.len - 1; i >= 0; i--)
  {
    r = 10 * r + x.cif[i];
    rez.cif[i] = r / n;
    r %= n;
  }

  while(rez.len > 0 && rez.cif[rez.len - 1] == 0)
  {
    rez.len--;
  }
  
  return r;
}

void show_big(NrMare nb)
{
    for(int i = nb.len - 1; i >= 0; i--)
    {
        fout << nb.cif[i];
    }
}

int main()
{
    long long n;
    NrMare nb1, nb2;
    init_big(nb1);
    init_big(nb2);
    fin >> n;
    init_big_int(nb1, n * n);
    prod_int(nb1, 3 * n, nb2);
    init_big(nb1);
    long long t = (1LL * 12) * n * n + (1LL * 13) * n + 2;
    sum_int2(nb2, t, nb1);
    init_big(nb2);
    prod_int(nb1, n * (n + 1), nb2);
    init_big(nb1);
    Divide(nb2, 60, nb1);
    show_big(nb1);
    return 0;
}