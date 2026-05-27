#include <fstream>

using namespace std;

ifstream fin("blind.in");
ofstream fout("blind.out");

int mat[501][501];
int dirx[4] = {1, 0, -1, 0};
int diry[4] = {0, 1, 0, -1};

int main()
{
    int c, n, m;
    fin >> c >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            fin >> mat[i][j];
        }
    }
    if(c == 1)
    {
        int xt, yt;
        fin >> xt >> yt;
        for(int i = 0; i < 4; i++)
        {
            if(mat[xt + dirx[i]][yt + diry[i]] == 1)
            {
                fout << xt + dirx[i] << ' ' << yt + diry[i] << '\n';
                break;
            }
        }
        fout << xt << ' ' << yt;
    }
    if(c == 2)
    {

    }
    if(c == 3)
    {

    }
    return 0;
}