#include <fstream>

using namespace std;

ifstream fin("ordsume.in");
ofstream fout("ordsume.out");

int main()
{
    int n, a[100], b[11000], nb = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] != a[j])
            {
                b[nb] = a[i] + a[j];
                nb++;
            }
        }
    }

    for(int i = 0; i < nb - 1; i++)
    {
        for(int j = i + 1; j < nb; j++)
        {
            if(b[i] > b[j])
            {
                swap(b[i], b[j]);
            }
        }
    }

    for(int i = 0; i < nb; i++)
    {
        while(i < nb - 1 && b[i] == b[i + 1])
        {
            i++;
        }
        fout << b[i] << ' ';
    }

    return 0;
}