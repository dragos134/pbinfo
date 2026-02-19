#include <fstream>

using namespace std;

ifstream fin("divigrup.in");
ofstream fout("divigrup.out");

int nr_div(int nr)
{
    if(nr == 0)
    {
        return 0;
    }
    int i = 2, cnt = 1;
    while(i <= nr)
    {
        int k = 0;
        while(nr % i == 0)
        {
            k++;
            nr /= i;
        }

        cnt *= (k + 1);
        i++;
        if(i * i > nr && nr > 1)
        {
            i = nr;
        }
    }

    return cnt;
}

int main()
{
    int n, a[200], b[200];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = nr_div(a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(b[i] < b[j] || (b[i] == b[j] && a[i] > a[j]))
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    int nr_tot = 1;
    for(int i = 0; i < n - 1; i++)
    {
        if(b[i] != b[i + 1])
        {
            nr_tot++;
        }
    }

    fout << nr_tot << '\n';

    for(int i = 0; i < n; i++)
    {
        int k = i, cnt = 1;
        while(k < n - 1 && b[k] == b[k + 1])
        {
            cnt++;
            k++;
        }
        
        fout << cnt << ' ' << a[i] << ' ';
        while(i < n - 1 && b[i] == b[i + 1])
        {
            fout << a[i + 1] << ' ';
            i++;
        }

        fout << '\n';
    }

    return 0;
}