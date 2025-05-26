#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("triviador.in");
ofstream fout("triviador.out");

int main()
{
    int n, x1, x2, x3, s, max1 = 0, max2 = 0, min = 100001;
    fin >> n;
    while (n)
    {
        n--;
        s = 0;
        fin >> x1 >> x2 >> x3;
        s = x1 + x2 + x3;
        if (s > max1)
        {
            max2 = max1;
            max1 = s;
        }
        else if (s > max2 && s != max1)
        {
            max2 = s;
        }
        if (s < min)
        {
            min = s;
        }
    }
    if (min == max1)
    {
        fout << "TOTI SUNT CASTIGATORI";
    }
    else
    {
        fout << max1 << " " << max2;
    }
    return 0;
}