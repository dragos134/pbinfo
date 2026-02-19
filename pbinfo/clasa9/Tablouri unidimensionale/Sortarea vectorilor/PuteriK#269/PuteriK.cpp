#include <fstream>

using namespace std;

ifstream fin("puterik.in");
ofstream fout("puterik.out");

int main()
{
    int n, k, a[100], b[100], nb = 0;
    fin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        int x = a[i];
        while(x % k == 0)
        {
            x /= k;
        }
        if(x == 1)
        {
            b[nb] = a[i];
            nb++;
        }
    }

    for(int i = 0; i < nb- 1; i++)
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
        fout << b[i] << ' ';
    }

    return 0;
}