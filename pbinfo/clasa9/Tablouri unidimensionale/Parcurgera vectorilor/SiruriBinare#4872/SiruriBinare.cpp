#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("siruribinare.in");
ofstream fout("siruribinare.out");

int main()
{
    int n, a[100000], sp[100000], x;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }
    
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        a[i] -= x;
    }
    
    sp[0] = a[0];
    for(int i = 1; i < n; i++)
    {
        sp[i] = sp[i - 1] + a[i];
    }

    for(int i = 0; i < n; i++)
    {
        fout << sp[i] << ' ';
    }
    
    return 0;
}