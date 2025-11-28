#include <fstream>

using namespace std;

ifstream fin("suma35.in");
ofstream fout("suma35.out");

int n, sol[1000];

void afiseaza(int k)
{
    for(int i = 1; i <= k - 1; i++)
    {
        fout << sol[i] << ' ';
    }
    fout << sol[k] << '\n';
}

void back(int k, int sum)
{
    int val[2] = {3, 5};
    for(int i = 0; i < 2; i++)
    {
        if(val[i] >= sol[k - 1])
        {
            sol[k] = val[i];
            if(sum + sol[k] <= n)
            {
                if(sum + sol[k] == n)
                {
                    afiseaza(k);
                }
                else
                {
                    back(k + 1, sum + val[i]);
                }
            }
        }
    }
}

int main()
{
    fin >> n;
    sol[0] = 0;
    back(1, 0);
    return 0;
}