#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("nrapp.in");
ofstream fout("nrapp.out");

int main()
{
    int n, q, v[100000], v1[100000], v2[100000], x, stv[100000], cnt = 0;
    char cmd;
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> v[i];
        v1[i] = v[i];
        v2[i] = v[i];
    }
    for(int i = 0; i < n; i++)
    {
        stv[cnt] = i;
        cnt++;
        while(cnt > 1 && v[i] < v[stv[cnt - 2]])
        {
            cnt--;
            v1[stv[cnt - 1]] = i + 1;
            stv[cnt - 1] = i;
        }
        v1[i] = n + 1;
    }
    cnt = 0;
    for(int i = n - 1; i >= 0; i--)
    {
        stv[cnt] = i;
        cnt++;
        while(cnt > 1 && v[i] < v[stv[cnt - 2]])
        {
            cnt--;
            v2[stv[cnt - 1]] = i + 1;
            stv[cnt - 1] = i;
        }
        v2[i] = 0;
    }
    
    fin >> q;
    while(q)
    {
        q--;
        fin >> cmd >> x;
        if(cmd == 'S')
        {
            fout << v2[x - 1] << '\n';
        }
        else
        {
            fout << v1[x - 1] << '\n';
        }
    }
    return 0;
}