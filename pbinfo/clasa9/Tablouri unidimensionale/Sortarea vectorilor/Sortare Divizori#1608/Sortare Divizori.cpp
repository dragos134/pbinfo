#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sortare_divizori.in");
ofstream fout("sortare_divizori.out");

int nr_div(int n)
{
    int cnt = 1, i = 2;
    while(i <= n)
    {
        int s = 1;
        while(n % i == 0)
        {
            n /= i;
            s++;
        }
        cnt *= s;
        i++;
        if(n > 1 && i * i > n)
        {
            i = n;
        }
    }
    return cnt;
}

int main()
{
    int n, a[1000], b[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = nr_div(a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(b[i] < b[j] || (b[i] == b[j] && a[i] > a[j]))
            {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }
    return 0;
}