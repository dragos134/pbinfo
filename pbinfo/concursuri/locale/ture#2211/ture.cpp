#include <fstream>

using namespace std;

ifstream fin("ture.in");
ofstream fout("ture.out");

int main()
{
    int n, mat[100][100], sum_lin[100], sum_col[100], raspuns = 0;
    fin >> n;

    // initializam vectorul sumelor pe coloana (sau il putem declara global)
    for(int i = 0; i < n; i++)
    {
        sum_col[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        sum_lin[i] = 0;
        for(int j = 0; j < n; j++)
        {
            fin >> mat[i][j];
            sum_lin[i] += mat[i][j];
            sum_col[j] += mat[i][j];
        }
    }

    // aceeasi linie
    for(int i = 0; i < n; i++)
    {
        int max_local1 = 0, max_local2 = 0;
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            int scor = sum_col[j] - 2 * mat[i][j];
            if(scor > max_local1)
            {
                max_local2 = max_local1;
                max_local1 = scor;
            }
            else if(scor > max_local2)
            {
                max_local2 = scor;
            }
        }

        int candidat = max_local1 + max_local2 + sum_lin[i];
        if(candidat > raspuns)
        {
            raspuns = candidat;
        }
    }

    // acceasi coloana
    for(int i = 0; i < n; i++)
    {
        int max_local1 = 0, max_local2 = 0;
        for(int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }

            int scor = sum_lin[j] - 2 * mat[j][i];

            if(scor > max_local1)
            {
                max_local2 = max_local1;
                max_local1 = scor;
            }
            else if(scor > max_local2)
            {
                max_local2 = scor;
            }
        }

        int candidat = sum_col[i] + max_local1 + max_local2;

        if(candidat > raspuns)
        {
            raspuns = candidat;
        }
    }
    for(int x = 0; x < n; x++)
    {
        for(int y = 0; y < n; y++)
        {
            if(x == y)
            {
                continue;
            }

            int f1 = 0, f2 = 0;
            

            for(int i = 0; i < n; i++)
            {

            }
        }
    }

    return 0;
}