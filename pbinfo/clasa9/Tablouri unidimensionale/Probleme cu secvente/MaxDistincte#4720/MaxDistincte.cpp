#include <iostream>

using namespace std;

int main()
{
    int n, k, a[100000], frec[100001], nr_distincte = 0;

    // initializare frec
    for(int i = 0; i < 100001; i++)
    {
        frec[i] = 0;
    }

    // citire de la tastatura
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        frec[a[i]]++;
    }

    for(int i = 0; i < 100001; i++)
    {
        if(frec[i] > 0)
        {
            nr_distincte++;
        }
    }

    

    return 0;
}