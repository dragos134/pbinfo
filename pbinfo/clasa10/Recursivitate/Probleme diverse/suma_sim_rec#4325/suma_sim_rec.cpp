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

int cmmdc(int a, int b)
{
    if(b > 0)
    {
        return cmmdc(b, a % b);
    }

    return a;
}

int suma_sim(int a[], int st, int dr)
{
    int rez = 0;
    if(st < dr - 1)
    {
        rez = suma_sim(a, st + 1, dr - 1);
    }
    int c = cmmdc(a[st], a[dr]);
    if(c == 1)
    {
        return a[st] + a[dr] + rez;
    }
    return rez;
}

int main()
{
    int a[1000], n;
    cin >> n;
    citire(a, n);
    cout << suma_sim(a, 0, n - 1);
    return 0;
}