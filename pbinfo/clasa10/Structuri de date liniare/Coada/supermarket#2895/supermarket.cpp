#include <iostream>
#include <fstream>
#include <queue>
#include <vector>

using namespace std;

ifstream fin("supermarket.in");
ofstream fout("supermarket.out");

struct per
{
    int elem;
    int timp;
};

int main()
{
    int n;
    int c[3] = {0};
    short a;
    queue<per> q[3];
    vector<int> vt[3];
    for(int i = 0; i < 1000002; i++)
    {
        vt[1].push_back(0);
        vt[2].push_back(0);
    }
    fin >> n;
    for(int i = 0; i < n; i++)
    {
        fin >> a;
        if(a == 1 || a == 2)
        {
            if(q[a].empty())
            {
                fout << -1 << endl;
                continue;
            }
            per front = q[a].front();
            while(front.timp != vt[a][front.elem])
            {
                q[a].pop();
                front = q[a].front();
            }
            c[a]--;
            fout << front.elem << endl;
            vt[a][front.elem] = -1;
            q[a].pop();
        }

        if(a == 3)
        {
            int val;
            fin >> val;
            per p;
            p.elem = val;
            p.timp = i;
            cout << c[1] << ' ' << c[2] << endl;
            if(c[1] <= c[2])
            {
                q[1].push(p);
                c[1]++;
                vt[1][val] = i;
                fout << 1 << endl;
            }
            else
            {
                q[2].push(p);
                c[2]++;
                vt[2][val] = i;
                fout << 2 << endl;
            }
        }

        if(a == 4)
        {
            int val;
            fin >> val;
            if(vt[1][val] > 0)
            {
                vt[1][val] = -1;
                c[1]--;
            }
            if(vt[2][val] > 0)
            {
                vt[2][val] = -1;
                c[2]--;
            }
        }
    }
    return 0;
}