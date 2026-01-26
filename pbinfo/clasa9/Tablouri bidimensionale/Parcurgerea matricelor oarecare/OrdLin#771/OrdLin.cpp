#include <iostream>

using namespace std;

int main()
{
    int n, m, mat[100][100], sums[100], new_ord[100];
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        new_ord[i] = i;
        for(int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            sum += mat[i][j];
        }
        sums[i] = sum;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(sums[i] > sums[j])
            {
                int aux = sums[i];
                sums[i] = sums[j];
                sums[j] = aux;

                int oaux = new_ord[i];
                new_ord[i] = new_ord[j];
                new_ord[j] = oaux;
            }
        }
    }

    for(int oi = 0; oi < n; oi++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << mat[new_ord[oi]][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}