#include <iostream>
#include <fstream>
#include <utility>
#include <algorithm>
using namespace std;

ifstream fin("proiecte.in");
ofstream fout("proiecte.out");

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second < p2.second;
}

int main()
{
    int n;
    pair<int, int> v[1000];
    fin >> n;
    for (int i = 0; i < n; i++)
    {
        v[i].first = i + 1;
        fin >> v[i].second;
    }

    sort(v, v + n, cmp);

    for(int i = 0; i < n; i++)
    {
        fout << v[i].first << ' ';
    }

    return 0;
}