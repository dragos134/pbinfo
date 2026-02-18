#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("produse.in");
ofstream fout("produse.out");

int prima_cifra(int nr)
{
    while(nr > 9)
    {
        nr /= 10;
    }
    return nr;
}

int main()
{
    int c, n, a[1000];
    fin >> c >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    if(c == 1)
    {
        int cnt_par = 0, cnt_imp = 0;
        for(int i = 0; i < n; i++)
        {
            while(a[i] > 99)
            {
                a[i] /= 10;
            }
            if(a[i] % 2 == 0)
            {
                cnt_par++;
            }
            else
            {
                cnt_imp++;
            }
        }

        fout << cnt_par << ' ' << cnt_imp;
    }
    if(c == 2)
    {
        sort(a, a + n);
        int mat[11][1001];
        for(int i = 0; i < 10; i++)
        {
            mat[i][0] = 0;
        }
        for(int i = 0; i < n; i++)
        {
            int pc = prima_cifra(a[i]);
            mat[pc][++mat[pc][0]] = a[i];
        }

        for(int i = 1; i < 10; i++)
        {
            if(mat[i][0] == 0) continue;
            fout << i << ' ';
            for(int j = 1; j <= mat[i][0]; j++)
            {
                fout << mat[i][j] << ' ';
            }
            fout << '\n';
        }
    }

    return 0;
}