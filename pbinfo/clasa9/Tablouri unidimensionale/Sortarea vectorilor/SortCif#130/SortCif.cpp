#include <fstream>

using namespace std;

ifstream fin("sortcif.in");
ofstream fout("sortcif.out");

int sum_cif(int nr)
{
    int s = 0;
    while(nr)
    {
        s += nr % 10;
        nr /= 10;
    }
    return s;
}

int main()
{
    int n, a[100], b[100];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = sum_cif(a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }
    return 0;
}