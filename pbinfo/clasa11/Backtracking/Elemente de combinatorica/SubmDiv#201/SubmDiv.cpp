#include <fstream>

using namespace std;

ifstream fin("submdiv.in");
ofstream fout("submdiv.out");

int n, m, sol[7], v_div[100], div_count, ok = 0;

void afisare()
{
    for(int i = 0; i < m; i++)
    {
        fout << sol[i] << ' ';
    }
    fout << '\n';
}

void back(int step, int start)
{
    for(int i = start; i < div_count; i++)
    {
        sol[step - 1] = v_div[i];
        if(step == m)
        {
            ok = 1;
            afisare();
        }
        else
        {
            back(step + 1, i + 1);
        }
    }
}

int main()
{
    int i;
    fin >> n >> m;
    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            v_div[div_count++] = i;
        }
    }
    v_div[div_count++] = n;

    back(1, 0);

    if(!ok)
    {
        fout << "fara solutie";
    }
    return 0;
}