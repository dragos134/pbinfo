#include <fstream>

using namespace std;

ifstream fin("halfsort3.in");
ofstream fout("halfsort3.out");

int main()
{
    int n, a[1000];
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {

            bool cond_pare = (abs(a[i]) % 2 == 0) && (abs(a[j]) % 2 == 0) && (a[i] > a[j]);
            bool cond_impare = (abs(a[i]) % 2 == 1) && (abs(a[j]) % 2 == 1) && (a[i] < a[j]);
            if(cond_pare || cond_impare)
            {
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }
    
    return 0;
}