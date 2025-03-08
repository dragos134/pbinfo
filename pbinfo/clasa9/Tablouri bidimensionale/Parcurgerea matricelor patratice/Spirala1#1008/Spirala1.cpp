#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

ifstream fin("spirala1.in");
ofstream fout("spirala1.out");

int ma[102][102], v[10000][2];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    int n, m, ani = 0, rand = 0, nrz = 0;
    ;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> ma[i][j];

    for (int i = 0; i <= n + 1; i++)
        ma[i][0] = ma[i][m + 1] = 1;

    for (int j = 0; j <= m + 1; j++)
        ma[0][j] = ma[n + 1][j] = 1;

    bool ok = 0;
    int k = 0;
    while (rand != n)
    {
        k = 0;
        rand = 0;
        for (int i = 1; i <= n; i++)
        {
            nrz = 0;

            for (int j = 1; j <= m; j++)
            {
                if (ma[i][j] == 0)
                    nrz++;
                else
                {
                    int vecini = 0;
                    for (int k = 0; k < 4; k++)
                    {
                        if (ma[i + dx[k]][j + dy[k]] == 0)
                            vecini++;
                    }

                    if (vecini >= 2)
                    {
                        v[++k][1] = i;
                        v[k][2] = j;
                    }
                }
            }

            if (nrz == m || k == 0)
            {
                rand++;
            }
        }

        if (k == 0)
            ok = 1;

        for (int x = 1; x <= k; x++)
        {
            ma[v[x][1]][v[x][2]] = 0;
        }

        ani++;
    }
    if (ok == 0)
        cout << ani - 1;
    else
        cout << -1;

    return 0;
}
