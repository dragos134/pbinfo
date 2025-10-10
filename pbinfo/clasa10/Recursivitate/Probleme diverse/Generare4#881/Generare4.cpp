#include <iostream>

using namespace std;

void afis_vector(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

void generare4(int a[], int st1, int dr1, int st2, int dr2, int n, int k)
{
    int x = 0;
    for(int i = st1; i < dr1; i++)
    {
        a[i] = k + x;
        x++;
    }
    for(int i = st2; i < dr2; i++)
    {
        a[i] = k + x;
        x++;
    }
    if(n > 2)
    {
        generare4(a, st1 * 2, st1 * 4, st2 - 2 * (dr2 - st2 + 1), st2, n - 1, 2 * (k - 1) + 1);
    }

}

int main()
{
    int a[50000], n, p = 1, cpyN;
    cin >> n;
    cpyN = n;
    while(cpyN)
    {
        cpyN--;
        p *= 2;
    }
    a[0] = 1;
    a[p - 1] = 2;
    generare4(a, 1, 2, p - 2, p - 1, n, 3);
    afis_vector(a, p);
    return 0;
}