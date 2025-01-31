#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("tv.in");
ofstream fout("tv.out");

struct ora
{
    int ora, min, sec;
    int durata;
};

void afisare_ora(ora o)
{
    printf("ora: %i, min: %i, sec: %i, durata: %i", o.ora, o.min, o.sec, o.durata);
}

bool comp_ora(ora o1, ora o2)
{
    return o1.ora <= o2.ora && o1.min <= o2.min && o1.sec <= o2.sec;
}

bool intersec(ora o1, ora o2)
{
    int sec_start1 = o1.ora * 3600 + o1.min * 60 + o1.sec;
    int sec_start2 = o2.ora * 3600 + o2.min * 60 + o1.sec;
    return sec_start1 + o1.durata >= sec_start2;
}

int final(ora o)
{
    return o.ora * 3600 + o.min * 60 + o.sec + o.durata;
}

int start(ora o)
{
    return o.ora * 3600 + o.min * 60 + o.sec;
}

int main()
{
    ora v[10000];
    string nr;
    char cv[2], chr;
    int c, n, timp;
    fin >> c >> n;

    for (int i = 0; i < n; i++)
    {
        fin >> v[i].durata;

        fin >> cv[0] >> cv[1];
        v[i].ora = (cv[0] - 48) * 10 + (cv[1] - 48);

        fin >> chr;
        fin >> cv[0] >> cv[1];
        v[i].min = (cv[0] - 48) * 10 + (cv[1] - 48);

        fin >> chr;
        fin >> cv[0] >> cv[1];
        v[i].sec = (cv[0] - 48) * 10 + (cv[1] - 48);
    }

    sort(v, v + n, comp_ora);

    for (int i = 0; i < n; i++)
    {
        afisare_ora(v[i]);
        cout << endl;
    }

    return 0;
}