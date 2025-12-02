#include <fstream>

using namespace std;

ifstream fin("pozitiex.in");
ofstream fout("pozitiex.out");

int main()
{
    int n, i_min = 1, x, ok = 0, nr;
    fin >> x >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> nr;
        if(nr == x)
        {
            ok = 1;
        }
        if(nr < x)
        {
            i_min++;
        }
    }
    if(!ok)
    {
        fout << "NU EXISTA";
    }
    else
    {
        fout << i_min;
    }

    return 0;
}