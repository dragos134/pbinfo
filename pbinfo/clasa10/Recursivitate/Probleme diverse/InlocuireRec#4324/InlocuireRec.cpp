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

int prima_cifra(int n)
{
    if(n < 10)
    {
        return n;
    }
    return prima_cifra(n / 10);
}

void inloc(int a[], int n)
{
    if(n > 1)
    {
        inloc(a, n - 1);
    }
    a[n - 1] = numar_cifre(a[n - 1]) * prima_cifra(a[n - 1]);
}

int main()
{
    int a[1000], n;
    cin >> n;
    citire(a, n);
    inloc(a, n);
    afisare(a, n);
    return 0;
    return 0;
}