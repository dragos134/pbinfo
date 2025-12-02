#include <iostream>

using namespace std;

int main()
{
    int n, x, a[10], ok = 1;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;

        // reinitializam vectorul de frecventa al cifrelor
        for(int i = 0; i < 10; i++)
        {
            a[i] = 0;
        }

        // populam vectorul a cu aparitiile cifrelor
        while(x)
        {
            a[x % 10]++;
            x /= 10;
        }

        // verificam daca in vector apare o cifra de mai mult de 1 data
        for(int i = 0; i < 10; i++)
        {
            if(a[i] > 1)
            {
                ok = 0;
                break;
            }
        }
    }
    if(ok)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}