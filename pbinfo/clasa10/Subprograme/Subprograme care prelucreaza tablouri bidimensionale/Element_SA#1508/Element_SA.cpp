#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("element_sa.in");
ofstream fout("element_sa.out");

int nr_sa(int a[100][100], int n, int m)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            bool isMinLine = true, isMaxLine = true;
            for(int k = 0; k < m; k++)
            {
                if(a[i][j] > a[i][k] && j != k)
                {
                    isMinLine = false;
                    break;
                }
            }
            for(int k = 0; k < m; k++)
            {
                if(a[i][j] < a[i][k] && j != k)
                {
                    isMaxLine = false;
                    break;
                }
            }
            bool isMaxCol = true;
            bool isMinCol = true;
            if(isMinLine)
            {
                for(int k = 0; k < n; k++)
                {
                    if(a[k][j] > a[i][j] && i != k)
                    {
                        isMaxCol = false;
                        break;
                    }
                }
            }
            if(isMaxLine)
            {
                for(int k = 0; k < n; k++)
                {
                    if(a[k][j] < a[i][j] && i != k)
                    {
                        isMinCol = false;
                        break;
                    }
                }
            }
            if(isMinLine && isMaxCol || isMaxLine && isMinCol)
            {
                cnt++;
            }
        }
    }

    return cnt;
}

int main()
{
    int a[100][100], n, m;
    fin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            fin >> a[i][j];
        }
    }
    cout << nr_sa(a, n ,m);
    return 0;
}