#include <fstream>

using namespace std;

ifstream fin("sumaxxl.in");
ofstream fout("sumaxxl.out");

int main()
{
    int n1[105], n2[105], rez[105], carry = 0;
    for(int i = 0; i < 105; i++)
    {
        n1[i] = 0;
        n2[i] = 0;
        rez[i] = 0;
    }

    fin >> n1[0];
    for(int i = n1[0]; i > 0; i--)
    {
        fin >> n1[i];
    }

    fin >> n2[0];
    for(int i = n2[0]; i > 0; i--)
    {
        fin >> n2[i];
    }

    rez[0] = max(n1[0], n2[0]);

    for(int i = 1; i <= rez[0]; i++)
    {
        rez[i] = n1[i] + n2[i] + carry;
        carry = rez[i] / 10;
        rez[i] = rez[i] % 10;
    }

    if(carry > 0)
    {
        rez[0]++;
        rez[rez[0]] = carry;
    }

    for(int i = rez[0]; i > 0; i--)
    {
        fout << rez[i];
    }

    return 0;
}