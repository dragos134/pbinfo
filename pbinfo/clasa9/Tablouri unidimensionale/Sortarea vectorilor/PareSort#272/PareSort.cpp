#include <fstream>

using namespace std;

ifstream fin("paresort.in");
ofstream fout("paresort.out");

int main()
{
    int n, a[1000], b[1000], nb = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        if(a[i] % 2 == 0)
        {
            b[nb] = a[i];
            nb++;
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

    
    if(nb == 0)
    {
        fout << "nu exista";
    }
    else
    {
        fout << nb << '\n';
    }

    for(int i = 0; i < nb; i++)
    {
        fout << b[i] << ' ';
    }


    return 0;
}