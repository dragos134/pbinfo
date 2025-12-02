#include <fstream>

using namespace std;

ifstream fin("zone.in");
ofstream fout("zone.out");

int main()
{
    int n, a[300], pr_par = -1, u_impar = -1;
    fin >> n;
    for(int i = 0; i < 3 * n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n; i++)
    {
        int j = 3 * n - i - 1;
        if(a[i] % 2 == 0 && pr_par == -1)
        {
            pr_par = i;
        }

        if(a[j] % 2 == 1 && u_impar == -1)
        {
            u_impar = j;
        }
    }

    if(pr_par != -1 && u_impar != -1)
    {
        int aux = a[pr_par];
        a[pr_par] = a[u_impar];
        a[u_impar] = aux;
    }

    for(int i = 0; i < 3 * n; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}