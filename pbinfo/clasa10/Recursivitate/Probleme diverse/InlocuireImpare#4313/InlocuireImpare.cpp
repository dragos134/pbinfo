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
    cout << a[n - 1] << ' ';
    if(n > 1)
    {
        afisare(a, n - 1);
    }
}

int cifre_impare(int n)
{
    int rez = 0;
    if(n >= 10)
    {
        rez = cifre_impare(n / 10);
    }
    if(n % 2 == 0)
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
    a[n - 1] = cifre_impare(a[n - 1]);
}

int main()
{
    int a[1001], n;
    cin >> n;
    citire(a, n);
    inloc(a, n);
    afisare(a, n);
    return 0;
}