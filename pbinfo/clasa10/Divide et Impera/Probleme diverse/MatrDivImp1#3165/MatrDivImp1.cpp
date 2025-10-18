#include <iostream>
using namespace std;

int MatrSumPar(int a[100][100])
{

}

int main()
{
    int mat[100][100], m, n;
    cin >> m >> n;
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << MatrSumPar(mat);
    return 0;
}