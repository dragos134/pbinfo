#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("numere2.in");
ofstream fout("numere2.out");

int main()
{
    int a[25000], n, cnt = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1])
        {
            // stergere
            n -= 2;
            for(int j = i; j < n; j++)
            {
                a[j] = a[j + 2];
            }
            i--;
            if(i >= 0)
            {
                i--;
            }
            cnt++;
        }
    }

    fout << cnt << '\n';

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }

    return 0;
}