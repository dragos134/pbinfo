#include <fstream>

using namespace std;

ifstream fin("maxim4.in");
ofstream fout("maxim4.out");

int main()
{
    int n, x, nr_ap = 0, n_max = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        if(x > n_max)
        {
            n_max = x;
            nr_ap = 1;
        }
        else if(x == n_max)
        {
            nr_ap++;
        }
    }

    fout << n_max << ' ' << nr_ap;

    return 0;
}
