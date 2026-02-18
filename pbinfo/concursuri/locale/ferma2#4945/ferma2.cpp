#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;

ifstream fin("ferma.in");
ofstream fout("ferma.out");

int n, config[15], best_config[15], best_dif = 2000000000, sum1 = 0, sum2 = 0, sum3 = 0;

void plus_unu()
{
    int i = n - 1;
    config[i]++;
    while(config[i] == 3)
    {
        config[i] = 0;
        config[--i]++;
    }
}

int main()
{
    int c, g, porci[15], p = 1;
    fin >> c >> n >> g;
    for(int i = 0; i < n; i++)
    {
        fin >> porci[i];
        p *= 3;
    }
    
    for(int i = 0; i < p; i++)
    {
        int sums[3] = {0, 0, 0};
        for(int k = 0; k < n; k++)
        {
            sums[config[k]] += porci[k];
        }

        sort(sums, sums + 3);
        //fout << sums[0] << ' ' << sums[1] << ' ' << sums[2] << '\n';
        int dif = sums[2] - sums[0];
        if(dif < best_dif)
        {
            for(int i = 0; i < n; i++)
            {
                best_config[i] = config[i] + 1;
            }
            best_dif = dif;
            sum1 = sums[0];
            sum2 = sums[1];
            sum3 = sums[2];
        }

        plus_unu();
    }

    if(c == 1)
    {
        fout << sum1 << ' ' << sum2 << ' ' << sum3;
    }
    if(c == 2)
    {
        for(int i = 0; i < n; i++)
        {
            fout << best_config[i] << ' ';
        }
    }
    if(c == 3)
    {
        fout << best_dif;
    }
    
    return 0;
}