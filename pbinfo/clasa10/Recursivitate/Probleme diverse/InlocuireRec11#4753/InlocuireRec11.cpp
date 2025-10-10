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

int sumcif(int n)
{
    if(n < 10)
    {
        return n;
    }
    return n % 10 + sumcif(n / 10);
}

int cifmax(int n)
{
    int rez = 0;
    if(n >= 10)
    {
        rez = cifmax(n / 10);
    }
    if(n % 10 > rez)
    {
        return n % 10;
    }
    return rez;
}

void inloc(int a[], int n)
{
    if(n > 1)
    {
        inloc(a, n - 1);
    }
    a[n - 1] = cifmax(a[n - 1]) * sumcif(a[n - 1]);
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