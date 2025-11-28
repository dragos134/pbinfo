#include <fstream>

using namespace std;

ifstream fin("instabook.in");
ofstream fout("instabook.out");

int main()
{
    int n, m, min_poz[100000], max_poz[100000], poz[100000], clas[100000], x;
    fin >> n >> m;
    
    for(int i = 0; i < n; i++)
    {
        poz[i] = i;
        min_poz[i] = i;
        max_poz[i] = i;
        clas[i] = i;
    }

    for(int i = 0; i < m; i++)
    {
        fin >> x;
        x--;
        if(poz[x] > 0)
        {
            // schimbare locuri in clasament
            int contender = clas[poz[x] - 1];
            clas[poz[x] - 1] = clas[poz[x]];
            clas[poz[x]] = contender;
            
            poz[x]--;
            poz[contender]++;

            if(poz[x] < max_poz[x])
            {
                max_poz[x] = poz[x];
            }

            if(poz[contender] > min_poz[contender])
            {
                min_poz[contender] = poz[contender];
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << max_poz[i] + 1 << ' ' << min_poz[i] + 1 << '\n';
    }

    return 0;
}