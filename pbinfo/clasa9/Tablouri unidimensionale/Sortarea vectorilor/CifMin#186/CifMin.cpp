#include <iostream>

using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        int cif_min = a[i] % 10;
        a[i] /= 10;
        while(a[i])
        {
            if(a[i] % 10 < cif_min)
            {
                cif_min = a[i] % 10;
            }
            a[i] /= 10;
        }

        a[i] = cif_min;
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    // schimbam prima cifra diferita de 0 sa fie pe prima pozitie
    int i = 0;
    while(a[i] == 0)
    {
        i++;
    }
    int aux = a[i];
    a[i] = a[0];
    a[0] = aux;

    // afisam "numarul" concatinand elementele vectorului
    for(int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}