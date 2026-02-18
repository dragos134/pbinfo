#include <fstream>

using namespace std;

ifstream fin("halfsort4.in");
ofstream fout("halfsort4.out");

int main()
{
    int n, a[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if((a[i] < 0 && a[j] < 0 && a[i] > a[j]) || (a[i] > 0 && a[j] > 0 && a[i] < a[j]))
            {
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