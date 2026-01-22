#include <fstream>

using namespace std;

ifstream fin("aranjamente.in");
ofstream fout("aranjamente.out");

int n, k, sol[9];

void afisare()
{
    for(int i = 0; i < k; i++)
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
        for(int z = 0; z < step - 1; z++)
        {
            if(sol[z] == i)
            {
                cond = 0;
            }
        }
        if(cond)
        {
            if(step == k)
            {
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
    fin >> n >> k;
    back(1);
    return 0;
}