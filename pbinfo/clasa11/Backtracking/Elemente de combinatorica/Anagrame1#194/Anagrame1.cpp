#include <fstream>
#include <string.h>
#include <algorithm>
using namespace std;

ifstream fin("anagrame1.in");
ofstream fout("anagrame1.out");

char cuvant[9], sol[9];
int folosit[9];
size_t lng;

void back(size_t step)
{
    for(size_t i = 0; i < lng; i++)
    {
        if(folosit[i])
        {
            continue;
        }

        folosit[i] = 1;
        sol[step - 1] = cuvant[i];

        if(step == lng)
        {
            fout << sol << '\n';
        }
        if(step < lng)
        {
            back(step + 1);
        }

        folosit[i] = 0;
    }
}

int main()
{
    fin.getline(cuvant, 9);
    lng = strlen(cuvant);

    sort(cuvant, cuvant + lng);
    back(1);
}