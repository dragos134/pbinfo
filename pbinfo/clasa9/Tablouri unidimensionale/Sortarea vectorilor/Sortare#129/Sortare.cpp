#include <fstream>

using namespace std;

ifstream fin("sortare.in");
ofstream fout("sortare.out");

int main()
{
    int n, a[100];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    int ok = 1;
    while(ok)
    {
        ok = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] < a[i + 1])
            {
                ok = 1;
                int aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }
    return 0;
}