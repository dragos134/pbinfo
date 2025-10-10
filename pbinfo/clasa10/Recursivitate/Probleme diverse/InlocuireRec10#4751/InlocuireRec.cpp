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

int nr_ap(int n, int c)
{
    if(n < 10)
    {
        return n == c;
    }
    return nr_ap(n / 10, c) + ((n % 10) == c);
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
    int c = prima_cifra(a[n - 1]);
    a[n - 1] = nr_ap(a[n - 1], c);
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