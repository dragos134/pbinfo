#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("fadema.in");
ofstream fout("fadema.out");

int main()
{
    int mat[1000][1000];
    int n, m;
    fin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            fin >> mat[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
    }
    return 0;
}