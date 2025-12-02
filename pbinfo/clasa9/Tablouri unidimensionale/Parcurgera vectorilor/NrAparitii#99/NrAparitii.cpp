#include <fstream>

using namespace std;

ifstream fin("nraparitii.in");
ofstream fout("nraparitii.out");

int main()
{
    int n, a[100], nr_ap = 1;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[n - 1])
        {
            nr_ap++;
        } 
    }

    fout << nr_ap;
    return 0;
}