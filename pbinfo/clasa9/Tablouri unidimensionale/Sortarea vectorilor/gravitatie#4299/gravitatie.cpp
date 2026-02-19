#include <fstream>
#include <algorithm>

using namespace std;

ifstream fin("gravitatie.in");
ofstream fout("gravitatie.out");

int main()
{
    int n;
    unsigned int a[100000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    sort(a, a + n);

    int cnt = 1;

    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] != a[i + 1])
        {
            cnt++;
        }
    }

    fout << cnt;

    return 0;
}