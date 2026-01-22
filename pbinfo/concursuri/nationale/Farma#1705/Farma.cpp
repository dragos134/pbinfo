#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("farma.in");
ofstream fout("farma.out");

struct medicament
{
    int pret;
    int cod;
    char nume[31];
};

struct substanta
{
    int cnt;
    medicament meds[9];
};

substanta v_subst[9];
int n, m, k = 0, comp[100][100], sol[9], sol_pret[9], sum_min = 1000000000;

void back(int step, int suma)
{
    for(int i = 0; i < v_subst[step - 1].cnt; i++)
    {
        sol[step - 1] = v_subst[step - 1].meds[i].cod;
        sol_pret[step - 1] = v_subst[step - 1].meds[i].pret;
        int nsum = suma + sol_pret[step - 1];

        int cond = 1;
        for(int i = 0; i < step - 1; i++)
        {
            if(comp[sol[step - 1]][sol[i]] == 1)
            {
                cond = 0;
                break;
            }
        }

        if(cond)
        {
            if(step == n)
            {
                if(nsum < sum_min)
                {
                    sum_min = nsum;
                }
            }
            else
            {
                if(nsum < sum_min)
                {
                    back(step + 1, nsum);
                }
            }
        }
    }
}

int main()
{
    int c;
    char l[701];
    fin >> c >> n;
    fin.ignore();
    for(int i = 0; i < n; i++)
    {
        fin.getline(l, 701);

        char *l_meds = strchr(l, ':') + 1;
        char *tok = strtok(l_meds, " ,");
        
        int pas = 0;

        while(tok != NULL)
        {
            if(pas % 2 == 0)
            {
                strcpy(v_subst[i].meds[pas / 2].nume, tok);
                v_subst[i].meds[pas / 2].cod = k;
                k++;
            }
            else
            {
                v_subst[i].meds[pas / 2].pret = atoi(tok);
            }

            pas++;
            tok = strtok(NULL, " ,");
        }

        v_subst[i].cnt = pas / 2;
    }
    fin >> m;
    fin.ignore();
    if(c == 1)
    {
        for(int i = 0; i < n; i++)
        {
            fout << v_subst[i].cnt << '\n';
        }
    }
    if(c == 2)
    {
        while(m)
        {
            m--;
            char l[80];
            fin.getline(l, 80);
            char *tok = strtok(l, "/");
            int c1, c2;
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < v_subst[i].cnt; j++)
                {
                    if(strcmp(tok, v_subst[i].meds[j].nume) == 0)
                    {
                        c1 = v_subst[i].meds[j].cod;
                    }
                }
            }

            tok = strtok(NULL, "/");
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < v_subst[i].cnt; j++)
                {
                    if(strcmp(tok, v_subst[i].meds[j].nume) == 0)
                    {
                        c2 = v_subst[i].meds[j].cod;
                    }
                }
            }

            comp[c1][c2] = 1;
            comp[c2][c1] = 1;
        }
        back(1, 0);
        fout << sum_min;
    }

    return 0;
}