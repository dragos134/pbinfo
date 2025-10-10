#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("matdiag.in");
ofstream fout("matdiag.out");

int MatDiag(int a[100][100], int n)
{
    for(int i = 1; i < n; i++)
    {
        if(a[i][i] != a[i - 1][i - 1])
        {
            return 0;
        }
    }
    for(int i = 1; i < n - 1; i++)
    {
        int col = 1, lin = i + 1;
        while(lin < n)
        {
            cout << a[lin][col] << ' ';
            if(a[lin][col] != a[lin - 1][col - 1])
            {
                return 0;
            }
            lin++;
            col++;
        }
    }

    for(int i = 1; i < n - 1; i++)
    {
        int col = i + 1, lin = 1;
        while(col < n)
        {
            cout << a[lin][col] << ' ';
            if(a[lin][col] != a[lin - 1][col - 1])
            {
                return 0;
            }
            lin++;
            col++;
        }
    }

    return 1;
}

int main()
{
    int a[100][100], n;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            fin >> a[i][j];
        }
    }
    fout << MatDiag(a, n);
    return 0;
}