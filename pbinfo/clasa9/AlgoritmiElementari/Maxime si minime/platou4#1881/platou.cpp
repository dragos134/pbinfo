#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("platou4.in");
ofstream fout("platou4.out");

int main()
{
    int n = 0, x, cntSt = 0, partial = 0;
    bool primPar = false;
    while (fin >> x)
    {
        n++;
        if (!primPar)
        {
            if (x % 2)
            {
                cntSt++;
            }
            else
            {
                primPar = true;
            }
        }
        else
        {
            if (x % 2)
            {
                partial++;
            }
            else
            {
                partial = 0;
            }
        }
    }
    fout << n - (cntSt + partial);
    return 0;
}