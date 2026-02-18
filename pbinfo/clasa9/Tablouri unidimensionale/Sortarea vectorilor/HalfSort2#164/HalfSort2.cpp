#include <fstream>

using namespace std;

ifstream fin("halfsort2.in");
ofstream fout("halfsort2.out");

int main()
{
    int n, a[100];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 2; j < n; j += 2)
        {
            if(i % 2 == 0 && a[i] < a[j] || i % 2 == 1 && a[i] > a[j])
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