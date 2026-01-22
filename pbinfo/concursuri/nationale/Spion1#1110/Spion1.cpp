#include <fstream>

using namespace std;

ifstream fin("spion1.in");
ofstream fout("spion1.out");

int fact[100001], invfact[100001];

int pow_mod(int b, int exp, int mod)
{
    if(exp > 1)
    {
        long long temp = 1LL * (b % mod) * (b % mod);
        long long rez = 1LL * pow_mod((int)(temp % mod), exp / 2, mod) % mod;
        if(exp % 2)
        {
            rez = (int)((1LL * (b % mod) * rez) % mod);
        }
        return rez;
    }
    return b % mod;
}

void precalc_fact(int n)
{
    fact[0] = 1;
    for(int i = 1; i <= n; i++)
    {
        fact[i] = (1LL * fact[i - 1] * i) % 100003;
    }

    invfact[n] = pow_mod(fact[n], 100001, 100003);
    for(int i = n - 1; i > 0; i--)
    {
        invfact[i] = (1LL * invfact[i + 1] * (i + 1)) % 100003;
    }
}

int main()
{
    int c, n = 0, nr_v = 0, nr_e = 0;
    char pas;
    fin >> c;
    while(fin >> pas)
    {
        n++;
        if(pas == 'E')
        {
            nr_e++;
        }
    }
    nr_v = n - nr_e;
    if(c == 1)
    {
        fout << 1 + nr_e;
    }
    else
    {
        // calculam combinari de n luate cate nr_e sau nr_v;
        precalc_fact(n);
        int k = nr_e;
        long long rez = 1LL * fact[n] * invfact[k] % 100003 * invfact[n - k] % 100003;
        fout << rez;
    }

    return 0;
}