#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("plusminus.in");
ofstream fout("plusminus.out");

int n, sol[23], ok = 0;

void afisare()
{
    for(int i = 0; i < n; i++)
    {
        if(sol[i] < 0)
        {
            fout << "- ";
        }
        else
        {
            fout << "+ ";
        }
    }
    fout << '\n';
}

void back(int step, int sum)
{
    int val[2] = {-1, 1};
    for(int i = 0; i < 2; i++)
    {
        sol[step - 1] = val[i] * step * step;
        int news = sum + sol[step - 1];
        if(step == n)
        {
            if(news == n)
            {
                afisare();
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
    fin >> n;
    back(1, 0);
    if(ok == 0)
    {
        fout << "IMPOSIBIL";
    }
    return 0;
}