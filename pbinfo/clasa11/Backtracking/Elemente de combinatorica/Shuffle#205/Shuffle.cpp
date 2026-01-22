#include <fstream>

using namespace std;

ifstream fin("shuffle.in");
ofstream fout("shuffle.out");

int n, perm[9], sol[9], alaturate[10][10], ok = 0;

void afisare()
{
    for(int i = 0; i < n; i++)
    {
        fout << sol[i] << ' ';
    }
    fout << '\n';
}

void back(int step)
{
    for(int i = 1; i <= n; i++)
    {
        sol[step - 1] = i;
        int cond = 1;
        for(int z = 0; z < step - 1;z++)
        {
            if(i == sol[z])
            {
                cond = 0;
                break;
            }
        }
        if(step == 1 || cond && step > 1 && alaturate[sol[step - 2]][i] == 0)
        {
            if(step == n)
            {
                ok = 1;
                afisare();
            }
            else
            {
                back(step + 1);
            }
        }
    }
}

int main()
{
    fin >> n >> perm[0];
    for(int i = 1; i < n; i++)
    {
        fin >> perm[i];
        alaturate[perm[i]][perm[i - 1]] = 1;
        alaturate[perm[i - 1]][perm[i]] = 1;
    }

    back(1);
    if(!ok)
    {
        fout << "nu exista";
    }
    return 0;
}