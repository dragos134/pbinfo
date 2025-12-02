#include <fstream>

using namespace std;

ifstream fin("numarspecial.in");
ofstream fout("numarspecial.out");

int prime[1000001];

void ciur()
{
    prime[1] = 1;
    for(int i = 2; i <= 1000000; i++)
    {
        if(prime[i] == 0)
        {
            for(int j = 2 * i; j <= 1000000; j += i)
            {
                prime[j] = 1;
            }
        }
    }
}

int main()
{
    ciur();
    int n, x, contender = -1, k_st = 0, k_dr = 0, ord, nr_ord0 = 0, nr_ord1 = 0, ord_max = 0;
    fin >> n;
    while(n)
    {
        n--;
        fin >> x;
        if(x % 9 == 0)
        {
            if(contender != -1)
            {
                ord = min(k_st, k_dr);
                if(ord > ord_max)
                {
                    ord_max = ord;
                }
                if(ord >= 0)
                {
                    nr_ord0++;
                }
                if(ord >= 1)
                {
                    nr_ord1++;
                }
            }
            contender = x;
            k_st = k_dr;
            k_dr = 0;
        }
        else if(prime[x] == 0)
        {
            k_dr++;
        }
        else
        {
            if(contender != -1)
            {
                ord = min(k_st, k_dr);
                if(ord > ord_max)
                {
                    ord_max = ord;
                }
                if(ord >= 0)
                {
                    nr_ord0++;
                }
                if(ord >= 1)
                {
                    nr_ord1++;
                }
            }
            contender = -1;
            k_st = 0;
            k_dr = 0;
        }
    }

    if(contender != -1)
    {
        ord = min(k_st, k_dr);
        if(ord > ord_max)
        {
            ord_max = ord;
        }
        if(ord >= 0)
        {
            nr_ord0++;
        }
        if(ord >= 1)
        {
            nr_ord1++;
        }
    }
    fout << nr_ord0 << '\n' << nr_ord1 << '\n' << ord_max;
    return 0;
}