#include <fstream>

using namespace std;

ifstream fin("sumaxl.in");
ofstream fout("sumaxl.out");

int main()
{
    int n, a[102], carry = 0;
    for(int i = 0; i < 102; i++)
    {
        a[i] = 0;
    }
    fin >> a[0];
    for(int i = a[0]; i >= 1; i--)
    {
        fin >> a[i];
    }

    fin >> n;

    int i = 1;

    while(n)
    {
        a[i] = a[i] + n % 10 + carry;
        carry = a[i] / 10;
        a[i] = a[i] % 10;
        i++;
        n /= 10;
    }

    while(carry > 0)
    {
        a[i] = a[i] + carry;
        carry = a[i] / 10;
        a[i] = a[i] % 10;
        i++;
    }

    if(a[0] < i - 1)
    {
        a[0] = i - 1;
    }

    for(int k = a[0]; k >= 1; k--)
    {
        fout << a[k];
    }

    return 0;
}