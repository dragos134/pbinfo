#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("tabla.in");
ofstream fout("tabla.out");

int ma[22][22], n, punctaj;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> ma[i][j];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                if (ma[i + dx[k]][j + dy[k]] != 0 && ma[i + dx[k]][j + dy[k]] != ma[i][j])
                {
                    swap(ma[i][j], ma[i + dx[k]][j + dy[k]]);
                }
            }
        }
    }

    return 0;
}
