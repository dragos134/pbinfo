#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fmi_orase1.in");
ofstream fout("fmi_orase1.out");

int main()
{
    int n, a[100], p_max = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int p_cur = min(a[i], a[j]) * (j - i);
            if(p_cur > p_max)
            {
                p_max = p_cur;
            }
        }
    }

    fout << p_max;

    return 0;
}