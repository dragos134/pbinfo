#include <fstream>
#include <vector>
#include <utility>
using namespace std;

ifstream fin("macarie.in");
ofstream fout("macarie.out");

vector<int> calculeaza_nr_multipli(vector<int> vec)
{
    vector<int> frec(1000001, 0);
    int valMax = 0;
    for (int i : vec)
    {
        frec[i]++;
        valMax = max(valMax, i);
    }

    vector<int> nrMultipli(valMax + 1, 0);

    for (int i = 1; i <= valMax; i++)
    {
        for (int m = i; m <= valMax; m += i)
        {
            nrMultipli[i] += frec[m];
        }
    }

    return nrMultipli;
}

int main()
{
    int n, q, x;
    vector<int> a, poz, vecMultipli, rez;
    vector<pair<int, int>> vp;
    fin >> n >> q;

    // citire date din fisier
    for (int i = 0; i < n; i++)
    {
        fin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < q; i++)
    {
        fin >> x;
        poz.push_back(x);
    }

    // calculare NrMultipli
    vecMultipli = calculeaza_nr_multipli(a);

    int s = 0;
    for (int i = 0; i < vecMultipli.size(); i++)
    {
        if (vecMultipli[i] != 0)
        {
            s += vecMultipli[i];
            vp.push_back({i, s});
        }
    }

    for (int i = 0; i < q; i++)
    {
        int st = 0, dr = vp.size() - 1;
        int ok = 0;
        while (st < dr)
        {
            int mj = (dr + st) / 2;

            if (poz[i] > vp[mj].second)
            {
                st = mj + 1;
            }
            else if (poz[i] <= vp[mj - 1].second)
            {
                dr = mj - 1;
            }
            else if (poz[i] > vp[mj - 1].second && poz[i] <= vp[mj].second)
            {
                fout << vp[mj].first << ' ';
                ok = 1;
                break;
            }
        }
        if (!ok)
        {
            fout << vp[st].first << ' ';
        }
    }

    return 0;
}