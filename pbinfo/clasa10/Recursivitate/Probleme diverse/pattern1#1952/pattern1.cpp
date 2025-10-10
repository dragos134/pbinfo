#include <iostream>

using namespace std;

void pattern1(int m[][100], int n, int linie, int coloana, int p)
{
    m[linie][coloana] = n; 
    if(n > 1)
    {
        pattern1(m, n - 1, linie - p / 2, coloana - p / 2, p / 2);
        pattern1(m, n - 1, linie - p / 2, coloana + p / 2, p / 2);
        pattern1(m, n - 1, linie + p / 2, coloana - p / 2, p / 2);
        pattern1(m, n - 1, linie + p / 2, coloana + p / 2, p / 2);
    }
}

int main()
{
    int n, p = 1, cpyN;
    int m[100][100];
    cin >> n;
    cpyN = n;
    while(cpyN)
    {
        cpyN--;
        p *= 2;
    }
    for(int i = 0; i < p - 1; i++)
    {
        for(int j = 0; j < p - 1; j++)
        {
            m[i][j] = 0;
        }
    }
    pattern1(m, n, (p - 1) / 2, (p - 1) / 2, p / 2);

    for(int i = 0; i < p - 1; i++)
    {
        for(int j = 0; j < p - 1; j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }
}