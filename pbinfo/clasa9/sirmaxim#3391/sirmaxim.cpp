#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sirmaxim.in");
ofstream fout("sirmaxim.out");

int main()
{
    int n, x, i = 0, max = 0, count = 0;
    fin >> n;
    while (i < n / 2)
    {
        i++;
        fin >> x;
        if (x > max)
        {
            max = x;
        }
    }

    while (i < n)
    {
        i++;
        fin >> x;
        if (x == max)
        {
            count++;
        }
    }
    fout << count;
    return 0;
}