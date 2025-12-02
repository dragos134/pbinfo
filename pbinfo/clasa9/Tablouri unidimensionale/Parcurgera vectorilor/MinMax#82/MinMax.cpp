#include <fstream>

using namespace std;

ifstream fin("minmax.in");
ofstream fout("minmax.out");

int main()
{
    int n, a[1000], min_n, max_n;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    min_n = a[0];
    max_n = a[0];

    for(int i = 1; i < n; i++)
    {
        if(a[i] > max_n)
        {
            max_n = a[i];
        }

        if(a[i] < min_n)
        {
            min_n = a[i];
        }
    }

    fout << min_n << ' ' << max_n;

    return 0;
}