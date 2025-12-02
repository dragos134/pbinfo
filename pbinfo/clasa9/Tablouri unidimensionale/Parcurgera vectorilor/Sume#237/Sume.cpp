#include <fstream>

using namespace std;

ifstream fin("sume.in");
ofstream fout("sume.out");

int main()
{
    int n, a[100], s = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
        s += a[i];
    }

    for(int i = 0; i < n; i++)
    {
        fout << s << '\n';
        s -= a[n - i - 1];
    }
    return 0;
}