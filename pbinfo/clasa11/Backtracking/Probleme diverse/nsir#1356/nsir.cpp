#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nsir.in");
ofstream fout("nsir.out");

const double LIMIT = 0.00001;

int n, sol[75], ok = 0;

void afiseaza(int k)
{
    for(int i = 0; i < k; i++)
    {
        fout << sol[i] << ' ';
    }
    fout << '\n';
}

void back(int step, int sum1, double sum2, int last)
{
    int i = last;
    while(sum2 + 1./i > 1 + LIMIT && i <= n)
    {
        i++;
    }
    sol[step - 1] = i;
    int news1 = i + sum1;
    double news2 = 1./i + sum2;
    while(news1 <= n && news2 <= 1 + LIMIT)
    {
        if(news1 == n && news2 > 1 - LIMIT && news2 < 1 + LIMIT)
        {
            afiseaza(step);
            ok = 1;
        }
        else
        {
            back(step + 1, news1, news2, i);
        }
        i++;
        sol[step - 1] = i;
        news1 = i + sum1;
        news2 = 1./i + sum2;
    }
}

int main()
{
    fin >> n;

    for(int i = 5; i <= 75; i++)
    {
        n = i;
        ok = 0;
        fout << "n este " << n << endl;
        back(1, 0, 0., 1);
        if(ok == 0)
        {
            fout << 0 ;
        }
        fout << endl;
    }
    return 0;
}