#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("paranteze.in");
ofstream fout("paranteze.out");

int n;
char sol[20];

void afiseaza()
{
    for(int i = 1; i <= n; i++)
    {
        fout << sol[i];
    }
    fout << '\n';
}

void back(int step, int nrDes, int nrInc)
{
    char par[2] = {'(', ')'};

    for(int i = 0; i < 2; i++)
    {
        sol[step] = par[i];
        int tempDes = nrDes, tempInc = nrInc;
        if(i == 0) tempDes++;
        if(i == 1) tempInc++;
        if(step < n)
        {
            if(tempDes >= tempInc)
            {
                back(step + 1, tempDes, tempInc);
            }
        }
        else
        {
            if(tempDes == tempInc)
            {
                afiseaza();
            }
        }
    }
}

int main()
{
    fin >> n;
    back(1, 0, 0);
    return 0;
}