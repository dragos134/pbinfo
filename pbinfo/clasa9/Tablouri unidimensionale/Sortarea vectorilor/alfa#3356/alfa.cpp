#include <fstream>

using namespace std;

ifstream fin("alfa.in");
ofstream fout("alfa.out");

int main()
{
    int n, x, a[1000], start = 0, end;
    fin >> n >> x;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    // gasim urmatorul x
    int k = 1;
    while(k < n)
    {
        while(a[k] != x)
        {
            k++;
        }
        end = k;

        //sortare intre start si end
        for(int i = start + 1; i < end - 1; i++)
        {
            for(int j = i + 1; j < end; j++)
            {
                if(a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }

        //actualizare start
        start = end;
        k = start + 1;
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}