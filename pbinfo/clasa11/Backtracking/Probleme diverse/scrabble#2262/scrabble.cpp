#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

ifstream fin("scrabble.in");
ofstream fout("scrabble.out");

const char VOWELS[6] = "AEIOU";

int n, folosit[18];
char piese[37], sol[21], max_sol[21], max_p = 0;


void afisare()
{
    for(int i = 0; i < 2 * max_p; i++)
    {
        fout << max_sol[i];
    }
}

void back(int step, int last_i)
{
    for(int i = 0; i < n; i++)
    {
        if(folosit[i] == 1)
        {
            continue;
        }
        int last_l = 0;
        if(last_i != -1)
        {
            last_l = piese[2 * last_i + 1];
        }
        folosit[i] = 1;
        sol[2 * (step - 1)] =  piese[2 * i];
        sol[2 * (step - 1) + 1] = piese[2 * i + 1];
        sol[2 * step] = '\0';
        if(last_i == -1 || strchr(VOWELS, last_l) == NULL && strchr(VOWELS, piese[2 * i]) != NULL 
            || strchr(VOWELS, last_l) != NULL && strchr(VOWELS, piese[2 * i]) == NULL)
        {
            if(step > max_p || step == max_p && strcmp(sol, max_sol) > 0)
            {
                max_p = step;
                for(int i = 0; i < 2 * max_p; i++)
                {
                    max_sol[i] = sol[i];
                }
                max_sol[2 * max_p] = '\0';
            }

            if(step < n && step < 10)
            {
                back(step + 1, i);
            }
        }
        folosit[i] = 0;
    }
}

int main()
{
    fin >> n;
    for(int i = 0; i < 2 * n; i++)
    {
        fin >> piese[i];
    }
    

    back(1, -1);

    afisare();
    return 0;
}