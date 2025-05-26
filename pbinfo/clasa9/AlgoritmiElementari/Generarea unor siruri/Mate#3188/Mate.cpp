#include <fstream>
#include <cmath>
using namespace std;

ifstream fin("mate.in");
ofstream fout("mate.out");

int main()
{
    int n;
    long long nrCurr, i = 1;
    fin >> n;
    while(n)
    {
        nrCurr = i * (i + 1) / 2;
        if((long long)(sqrt(nrCurr)) * (long long)(sqrt(nrCurr)) == nrCurr)
        {
            n--;
            fout << nrCurr << ' ';
        }
        i++;
    }
    return 0;
}