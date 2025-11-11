#include <iostream>

using namespace std;

void sterge(int v[], int &n, int i, int j)
{
    n = n - (j - i + 1);
    for(int ind = i; ind <= n; ind++)
    {
        v[ind] = v[ind + (j - i + 1)];
    }
}

int main()
{
    int n = 10;
    int v[100] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    sterge(v, n, 3, 4);
    cout << n << '\n';
    for(int i = 1; i <= n; i++)
    {
        cout << v[i] << ' ';
    }
    return 0;
}