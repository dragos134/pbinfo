#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("trafalet.in");
ofstream fout("trafalet.out");

const int MAX_SIZE = 501;
int a[MAX_SIZE][MAX_SIZE], aSecv[MAX_SIZE + 1][MAX_SIZE + 1];

void precalc(int nrLinii, int nrColoane)
{
    for(int i = 1; i <= nrColoane; i++)
    {
        aSecv[0][i] = 0;
    }

    for(int i = 1; i <= nrLinii; i++)
    {
        for(int j = 1; j <= nrColoane; j++)
        {
            aSecv[i][j] = aSecv[i - 1][j] + a[i][j];
        }
    }
}

long long suma_coloana(int col, int startL, int stopL)
{
    long long sum = 0;
    for(int i = startL; i <= stopL; i++)
    {
        sum += a[i][col];
    }
    return sum;
}

long long suma_coloana2(int col, int startL, int stopL)
{
    return aSecv[stopL][col] - aSecv[startL - 1][col];
}



long long suma_linie(int lin, int startC, int stopC)
{
    long long sum = 0;
    for(int i = startC; i <= stopC; i++)
    {
        sum += a[lin][i];
    }
    return sum;
}

long long suma_submatrice(int startL, int stopL, int startC, int stopC)
{
    long long sum = 0;
    for(int i = startL; i <= stopL; i++)
    {
        for(int j = startC; j <= stopC; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}



int main()
{
    int n, m, sumMax = 0;
    fin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            fin >> a[i][j];
            if((i + j) % 2)
            {
                a[i][j] = -a[i][j];
            }
        }
    }

    precalc(n, m);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            int ki = 0;
            // printf("[IMPORTANT] Dimensiune submatrice: (%i, %i)\n", i, j);
            while(ki + i <= n)
            {
                int kj = 1;
                long long sumInit = suma_submatrice(ki, ki + i, 0, j);
                long long altSum = sumInit, altSum2 = sumInit;
                // cout << "Suma initiala: " << sumInit << '\n';

                if(altSum > sumMax)
                {
                    sumMax = altSum;
                }
                if(-altSum > sumMax)
                {
                    sumMax = -altSum;
                }

                while(kj + j <= m)
                {
                    // long long newSum = suma_submatrice(ki, ki + i, kj, kj + j);
                    // altSum = altSum - suma_coloana(kj - 1, ki, ki + i) + suma_coloana(kj + j, ki, ki + i);
                    altSum2 = altSum2 - suma_coloana2(kj - 1, ki, ki + i) + suma_coloana2(kj + j, ki, ki + i);
                    // printf("(Suma1: %i, Suma2: %i, Suma3: %i)      Submatrice (l1: %i, c1: %i) (l2: %i, c2: %i)\n", newSum, altSum, altSum2, ki, kj, ki + i, kj + j);
                    if(altSum2 > sumMax)
                    {
                        sumMax = altSum2;
                    }
                    if(-altSum2 > sumMax)
                    {
                        sumMax = -altSum2;
                    }
                    kj++;
                }
                ki++;
            }
        }
    }

    fout << sumMax;



    return 0;
}