#include <fstream>

using namespace std;

ifstream fin("maxsim.in");
ofstream fout("maxsim.out");

int main()
{
    int n, a[1000], s_max = 0, i_max = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n / 2; i++)
    {
        int s = a[i] + a[n - i - 1];
        if(s > s_max)
        {
            s_max = s;
            i_max = i;
        }
    }

    fout << s_max << ' ' << i_max + 1 << ' ' << n - i_max;
    return 0;
}