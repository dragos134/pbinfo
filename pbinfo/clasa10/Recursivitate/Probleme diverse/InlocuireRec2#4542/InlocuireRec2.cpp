#include <iostream>

using namespace std;

void citire(int a[], int n)
{
    if(n > 1)
    {
        citire(a, n - 1);
    }
    cin >> a[n - 1];
}

void afisare(int a[], int n)
{
    if(n > 1)
    {
        afisare(a, n - 1);
    }
    cout << a[n - 1] << ' ';
}

int numar_cifre(int n)
{
    if(n < 10)
    {
        return 1;
    }
    return 1 + numar_cifre(n / 10);
}

int elim_cifre_impare(int n)
{
    int rez = 0;
    if(n >= 10)
    {
        rez = elim_cifre_impare(n / 10);
    }
    if(n % 2 == 1)
    {
        return rez;
    }
    return rez * 10 + n % 10;
}

void inloc(int a[], int n)
{
    if(n > 1)
    {
        inloc(a, n - 1);
    }
    if(numar_cifre(a[n - 1]) % 2 == 1)
    {
        a[n - 1] = elim_cifre_impare(a[n - 1]);
    }
}

int main()
{
    int a[1000], n;
    cin >> n;
    citire(a, n);
    inloc(a, n);
    afisare(a, n);
    return 0;
}