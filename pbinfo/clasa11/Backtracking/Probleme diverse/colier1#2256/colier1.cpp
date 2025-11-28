#include <fstream>
#include <iostream>
using namespace std;

ifstream fin("colier.in");
ofstream fout("colier.out");

int n, m, a[12], b[12], sol[9], val_max = 0, sol_max[9];
bool folosit[12];

void afisare()
{
    for(int i = 0; i < m; i++)
    {
        fout << sol_max[i] + 1 << ' ';
    }
    fout << '\n';
}

void back(int step, int val)
{
    for(int i = 0; i < n; i++)
    {
        // verificam dacd a mai fost folosita margeaua
        if(folosit[i])
        {
            continue;
        }
        folosit[i] = true;

        sol[step - 1] = i;
        int newval = val + b[i];
        if(step == 1)
        {
            back(step + 1, newval);
        }
        else if(step > 1 && a[i] != a[sol[step - 2]])
        {
            if(step == m && a[sol[0]] != a[i])
            {
                if(newval > val_max)
                {
                    val_max = newval;
                    for(int j = 0; j < m; j++)
                    {
                        sol_max[j] = sol[j];
                    }
                }
            }
            if(step < m)
            {
                back(step + 1, newval);
            }
        }
        
        // actualizam vectorul folosit
        folosit[i] = false;
    }
}

int main()
{
    fin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i] >> b[i];
    }
    back(1, 0);
    afisare();
    return 0;
}