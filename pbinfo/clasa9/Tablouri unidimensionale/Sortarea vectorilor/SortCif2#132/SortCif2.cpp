#include <fstream>

using namespace std;

ifstream fin("sortcif2.in");
ofstream fout("sortcif2.out");

int p_cif(int nr)
{
    while(nr > 9)
    {
        nr /= 10;
    }
    return nr;
}

int main()
{
    int n, a[100], b[100];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = p_cif(a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(b[i] > b[j])
            {
                swap(b[i], b[j]);
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}