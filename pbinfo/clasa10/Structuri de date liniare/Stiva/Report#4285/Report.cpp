#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

ifstream fin("report.in");
ofstream fout("report.out");

struct operatie
{
    int op, nr;
};

int main()
{
    int n, m, a[20000], stv[20000], cnt = 0;
    operatie vec_op[20000];
    fin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        fin >> a[i];
    }

    for(int i = 0; i < m; i++)
    {
        fin >> vec_op[i].op >> vec_op[i].nr;
    }

    for(int i = 0; i < m; i++)
    {
        stv[cnt] = i;
        cnt++;
        while(cnt > 1 && vec_op[i].nr >= vec_op[stv[cnt - 2]].nr)
        {
            cnt--;
            stv[cnt - 1] = i;
        }
    }

    if (cnt > 0) {
    int K = vec_op[stv[0]].nr;               // cel mai mare k
    vector<long long> pref(K);
    for (int i = 0; i < K; ++i) pref[i] = a[i];
    sort(pref.begin(), pref.end());          // o singura sortare, crescator

    int left = 0, right = K - 1;             // indicii in pref (mic -> mare)
    for (int idx = 0; idx < cnt; ++idx) {
        int i = stv[idx];
        int curK  = vec_op[i].nr;
        int nextK = (idx + 1 < cnt ? vec_op[stv[idx + 1]].nr : 0);

        if (vec_op[i].op == 1) {
            // coada [nextK, curK) primeste cele mai mari ramase
            for (int pos = curK - 1; pos >= nextK; --pos) {
                a[pos] = pref[right--];
            }
        } else {
            // coada [nextK, curK) primeste cele mai mici ramase
            for (int pos = curK - 1; pos >= nextK; --pos) {
                a[pos] = pref[left++];
            }
        }
    }
}

    for(int i = 0; i < n; i++)
    {
        fout << a[i] << ' ';
    }
    return 0;
}