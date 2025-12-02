#include <fstream>

using namespace std;

ifstream fin("pozitie.in");
ofstream fout("pozitie.out");

int main()
{
    int n, a[10000], i_min, pr;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    pr = a[0];

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
        if(a[i] == pr)
        {
            i_min = i + 1;
            break;
        }
    }

    fout << i_min;
    return 0;
}