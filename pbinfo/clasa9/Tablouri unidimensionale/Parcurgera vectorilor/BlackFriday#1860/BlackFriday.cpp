#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main()
{
    int n, iRedusMaxim = 0;
    double redusMaxim = 1;
    long long x;
    vector<long long> v1, v2;
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        fin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        fin >> x;
        v2.push_back(x);
    }
    int j = 0;
    for (int i = 1; i < n; i++)
    {

        if ((v1[i] - v2[i]) * v1[j] > (v1[j] - v2[j]) * v1[i])
        {
            j = i;
        }
    }

    fout << j + 1;

    return 0;
}