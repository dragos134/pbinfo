#include <fstream>

using namespace std;

ifstream fin("test.in");
ofstream fout("test.out");

unsigned int exp_rapid_mod(unsigned int b, unsigned int exp)
{
    if(exp > 1)
    {
        unsigned long long temp = 1ULL * (b % 6669666) * (b % 6669666);
        unsigned int rez = exp_rapid_mod((unsigned int)(temp % 6669666), exp / 2) % 6669666;
        if(exp % 2)
        {
            rez = (unsigned int)((1ULL * (b % 6669666) * rez) % 6669666);
        }
        return rez;
    }
    return b % 6669666;
}

int main()
{
    int n;
    unsigned int a[1000], b[1000];
    unsigned long long s = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        fin >> b[i];
    }

    for(int i = 0; i < n; i++)
    {
        unsigned int rez = exp_rapid_mod(a[i], b[i]);
        s += rez;
    }

    fout << s;

    return 0;
}