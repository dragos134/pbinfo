#include <iostream>

using namespace std;

void pattern(int m[][100], int startLinie, int stopLinie, int startColoana, int stopColoana, int p)
{
    for(int i = startLinie; i < stopLinie; i++)
    {
        for(int j = startColoana; j < stopColoana; j++)
        {
            m[i][j] = 1;
        }
    }
    if(p > 1)
    {
        pattern(m, startLinie + p, stopLinie + p / 2, startColoana, stopColoana - p / 2, p / 2);
        pattern(m, startLinie, stopLinie - p / 2, startColoana + p, stopColoana + p / 2, p / 2);
        pattern(m, startLinie + p, stopLinie + p / 2, startColoana + p, stopColoana + p / 2, p / 2);
    }
}

int main()
{
    int n = 0, lat = 1;
    int m[100][100];
    cin >> n;
    while(n)
    {
        n--;
        lat *= 2;
    }

    for(int i = 0; i < lat; i++)
    {
        for(int j = 0; j < lat; j++)
        {
            m[i][j] = 0;
        }
    }

    pattern(m, 0, lat / 2, 0, lat / 2, lat / 2);

    for(int i = 0; i < lat; i++)
    {
        for(int j = 0; j < lat; j++)
        {
            cout << m[i][j] << ' ';
        }
        cout << '\n';
    }

    return 0;
}