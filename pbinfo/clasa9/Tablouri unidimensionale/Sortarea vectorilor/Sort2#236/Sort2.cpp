#include <fstream>

using namespace std;

ifstream fin("sort2.in");
ofstream fout("sort2.out");

int main()
{
    int n = 0, a[100];
    while(fin >> a[n])
    {
        n++;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    int i = 0;
    while(a[i] < 100)
    {
        fout << a[i] << ' ';
        i++;
    }
    if(i == 0)
    {
        fout << "NU EXISTA";
    }

    return 0;
}