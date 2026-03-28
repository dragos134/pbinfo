#include <iostream>

using namespace std;

int nr_cif(int nr)
{
    int i = 1;
    while(nr > 9)
    {
        i++;
        nr /= 10;
    }
    return i;
}

int main()
{
    int n, x, ok = 0;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        int cif = nr_cif(x);
        if(cif % 2 == 1)
        {
            continue;
        }
        ok = 1;
        int p = 1;
        for(int i = 0; i < cif / 2; i++)
        {
            p *= 10;
        }
        cout << x % p * p + x / p << ' ';
    }
    if(ok == 0)
    {
        cout << "NU EXISTA";
    }
    return 0;
}