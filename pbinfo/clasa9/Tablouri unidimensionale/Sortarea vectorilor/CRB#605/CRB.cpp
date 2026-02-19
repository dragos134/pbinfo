#include <fstream>

using namespace std;

ifstream fin("crb.in");
ofstream fout("crb.out");

int main()
{
    int n, a[1000], b[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = i;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(b[i] == i)
        {
            cnt++;
        }
    }

    fout << cnt;
    return 0;
}