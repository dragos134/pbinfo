#include <fstream>

using namespace std;

ifstream fin("nrapprime.in");
ofstream fout("nrapprime.out");

bool is_prime(int n)
{
    if(n < 2)
    {
        return 0;
    }
    if(n == 2)
    {
        return 1;
    }
    if(n % 2 == 0)
    {
        return 0;
    }

    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n, x, nr_ap = 0;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> x;
        if(is_prime(x))
        {
            nr_ap++;
        }
    }

    fout << nr_ap;
    return 0;
}

