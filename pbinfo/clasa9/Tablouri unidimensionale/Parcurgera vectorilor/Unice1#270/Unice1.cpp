#include <fstream>

using namespace std;

ifstream fin("unice1.in");
ofstream fout("unice1.out");

int main()
{
    int n, a[1000], cnt = 0, b[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        b[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        if(b[i] == 1)
        {
            continue;
        }
        b[i] = 1;
        int ok = 1;
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                b[j] = 1;
                ok = 0;
            }
        }
        if(ok)
        {
            cnt++;
        }
    }

    fout << cnt;

    return 0;
}