#include <fstream>

using namespace std;

ifstream fin("gama.in");
ofstream fout("gama.out");

int main()
{
    int n, k, a[1000], ok = 1;
    fin >> n >> k;

    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    int i = 0;
    while(i < n && k > 0)
    {
        int capat = min(n, i + k + 1), min_i = i;
        for(int j = i + 1; j < capat; j++)
        {
            if(a[j] < a[min_i])
            {
                min_i = j;
            }
        }
        // shiftare de la i la min_i
        int aux = a[min_i];

        for(int j = min_i; j > i; j--)
        {
            a[j] = a[j - 1];
        }
        a[i] = aux;

        k = k - (min_i - i);
        i++;
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}