#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, s = 0, pPar = 0, ipPar = 0, iuPar = 0;
    bool existaPar = false;
    vector<int> v;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            existaPar = true;
            if (pPar == 0)
            {
                pPar = x;
                ipPar = i;
            }
            iuPar = i;
        }
        v.push_back(x);
    }

    for (int i = ipPar; i <= iuPar; i++)
    {
        s += v[i];
    }

    if (!existaPar)
    {
        cout << "NU EXISTA";
    }
    else
    {
        cout << s;
    }

    return 0;
}