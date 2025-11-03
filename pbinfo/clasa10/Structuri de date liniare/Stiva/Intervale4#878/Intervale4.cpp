#include <iostream>
#include <fstream>
#include <vector>
#include <utility>
using namespace std;

ifstream fin("intervale4.in");
ofstream fout("intervale4.out");

bool pair_intersects(pair<int, int> a, pair<int, int> b)
{
    if(a.first > b.second || a.second < b.first)
    {
        return false;
    }
    return true;
}

pair<int, int> intersect(pair<int, int> a, pair<int, int> b)
{
    return {min(a.first, b.first), max(a.second, b.second)};
}

int main()
{
    int n, cnt = 1, x_st, x_dr;
    fin >> n;
    vector<pair<int, int>> a(n);
    fin >> x_st >> x_dr;
    a[0] = {x_st, x_dr};
    for(int i = 1; i < n; i++)
    {
        fin >> x_st >> x_dr;
        a[cnt] = {x_st, x_dr};
        cnt++;
        while(cnt > 1 && pair_intersects(a[cnt - 1], a[cnt - 2]))
        {
            a[cnt - 2] = intersect(a[cnt - 1], a[cnt - 2]);
            cnt--;
        }
    }
    fout << cnt;
    return 0;
}