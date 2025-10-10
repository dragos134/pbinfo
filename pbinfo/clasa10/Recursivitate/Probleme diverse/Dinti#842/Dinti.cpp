#include <iostream>

using namespace std;

void fierastrau(int a[], int poz, int n, int p)
{
    a[poz] = n;
    if(n > 1)
    {
        fierastrau(a, poz - p / 2, n - 1, p / 2);
        fierastrau(a, poz + p / 2, n - 1, p / 2);
    }
}

int main()
{
    int n, p = 1, cpyN;
    int a[1025];
    cin >> n;
    cpyN = n;
    while (cpyN)
    {
        cpyN--;
        p *= 2;
    }
    fierastrau(a, (p - 1) / 2, n, p / 2);
    for(int i = 0; i < p - 1; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}