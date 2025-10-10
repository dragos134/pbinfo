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

void inloc(int a[], int n)
{
    if(a[n - 1] % 2 == 0)
    {
        a[n - 1] = a[n - 1] - a[0];
    }
    if(n > 1)
    {
        inloc(a, n - 1);
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