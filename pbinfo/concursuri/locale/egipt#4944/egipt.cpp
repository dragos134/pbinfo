#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("egipt.in");
ofstream fout("egipt.out");

void zero(int nr[610])
{
    nr[0] = 0;
    for(int i = 1; i < 610; i++)
    {
        nr[i] = 0;
    }
}

void afisare(int nr[610])
{
    for(int i = nr[0]; i > 0; i--)
    {
        fout << nr[i];
    }
}

void finisare(int nr[610])
{
    int carry = 0;
    for(int i = 1; i <= nr[0]; i++)
    {
        nr[i] += carry;
        carry = nr[i] / 10;
        nr[i] = nr[i] % 10;
    }

    while(carry > 0)
    {
        nr[0]++;
        nr[nr[0]] = carry % 10;
        carry = carry / 10;
    }
}

void adunare(int nr1[610], int nr2[610])
{
    nr2[0] = max(nr1[0], nr2[0]);

    for(int i = 1; i <= nr2[0]; i++)
    {
        nr2[i] = nr1[i] + nr2[i];
    }

    finisare(nr2);
}

void inmultire_int(int nr[610], int nr_int)
{
    for(int i = 1; i <= nr[0]; i++)
    {
        nr[i] = nr[i] * nr_int;
    }

    finisare(nr);
}



int main()
{
    int n, an, sum[610];
    zero(sum);

    fin >> n;
    fin.ignore();
    for(int i = 0; i < n; i++)
    {
        char rand[201];
        fin.getline(rand, 200);
        int cod_rand[610];
        zero(cod_rand);
        int size = strlen(rand);

        // adaugare in vector
        for(int i = 0; i < size; i++)
        {
            if(rand[i] >= 'a' && rand[i] <= 'z')
            {
                if(rand[i] > 99)
                {
                    cod_rand[++cod_rand[0]] = 1;
                }
                cod_rand[++cod_rand[0]] = rand[i] / 10 % 10;

                cod_rand[++cod_rand[0]] = rand[i] % 10;
            }
        }

        //inversare nr mare
        for(int i = 1; i <= cod_rand[0] / 2; i++)
        {
            int aux = cod_rand[i];
            cod_rand[i] = cod_rand[cod_rand[0] - i + 1];
            cod_rand[cod_rand[0] - i + 1] = aux;
        }
        adunare(cod_rand, sum);
    }

    fin >> an;
    inmultire_int(sum, an);
    
    int cnt = 0, best_cnt = 0, start = 1, best_start = 1;

    // gasire cea mai mare secventa impare
    for(int i = 1; i <= sum[0]; i++)
    {
        if(sum[i] % 2 == 1)
        {
            cnt++;
        }
        
        if(sum[i] % 2 == 0 || i == sum[0])
        {
            if(cnt >= best_cnt)
            {
                best_cnt  = cnt;
                best_start = start;
            }
            cnt = 0;
            start = i + 1;
        }
    }

    for(int i = best_start + best_cnt - 1; i >= best_start; i--)
    {
        fout << sum[i];
    }

    return 0;
}