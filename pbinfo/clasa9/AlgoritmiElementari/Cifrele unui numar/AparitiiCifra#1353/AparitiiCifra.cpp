#include <fstream>

#include <iostream>

using namespace std;

ifstream fin("aparitiicifra.in");
ofstream fout("aparitiicifra.out");

int aparitii_cifra(int n, int c)
{
    int cnt = 0;
    while(n)
    {
        if(n % 10 == c)
        {
            cnt++;
        }
        n /= 10;
    }

    return cnt;
}

int main()
{
    int n, cpyn;
    long long p = 1, s = 0;
    short c;
    fin >> n >> c;
    cpyn = n;
    while(cpyn)
    {
        int n1 = n - c * p;
        int n2 = n1 / (p * 10);
        int n3 = n2 * p;
        int n4 = n % p;
        int cur = n3 + n4 + 1;
        s = s + (n - c * p) / (p * 10) * p + n % p + 1;
        p *= 10;
        cpyn /= 10;
    }

    // c = 1;
    // for(int i = 200; i < 250; i++)
    // {
    //     int test_s = 0;
    //     for(int j = 1; j <= i; j++)
    //     {
    //         test_s += aparitii_cifra(j, c);
    //     }
        
    //     cpyn = i;
    //     n = i;
    //     s = 0;
    //     p = 1;
    //     while(cpyn)
    //     {
    //         int n1 = n - c * p;
    //         int n2 = n1 / (p * 10);
    //         int n3 = n2 * p;
    //         int n4 = n % p;
    //         int cur = n3 + n4 + 1;
    //         s = s + (n - c * p) / (p * 10) * p + n % p + 1;
    //         p *= 10;
    //         cpyn /= 10;
    //     }

    //     if(test_s != s)
    //     {
    //         cout << i << ' ' << s << ' ' << test_s << endl;
    //     }
    // }

    fout << s;
    return 0;
}