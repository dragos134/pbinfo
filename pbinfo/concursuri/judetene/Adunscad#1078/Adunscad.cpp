#include <fstream>

using namespace std;

ifstream fin("adunscad.in");
ofstream fout("adunscad.out");

int n, m, cif[20], sol[20], ok = 0;

void afiseaza()
{
    fout << sol[0];
    for(int i = 1; i < m; i++)
    {
        if(sol[i] >= 0)
        {
            fout << "+" << sol[i];
        }
        else
        {
            fout << sol[i];
        }
    }
}

void back(int step, int sum)
{
    int val[2] = {-1, 1};
    for(int i = 0; i < 2; i++)
    {
        int cur = val[i] * cif[step - 1];
        sol[step - 1] = cur;
        int news = sum + cur;
        if(step == m)
        {
            if(news == n)
            {
                afiseaza();
                ok = 1;
            }
        }
        else
        {
            back(step + 1, news);
        }
    }
}

int main()
{
    fin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        fin >> cif[i];
    }
    back(1, 0);
    if(ok == 0)
    {
        fout << 0;
    }
    return 0;
}