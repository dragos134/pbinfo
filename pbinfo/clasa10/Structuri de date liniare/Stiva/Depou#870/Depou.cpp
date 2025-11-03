#include <iostream>
using namespace std;

int main()
{
    int a[1000], b[1000], frec[1000], rez[2000], cntA, cntB = 0, cntC = 0, k = 0;
    cin >> cntA;
    int n = cntA;
    bool ok = true;
    for(int i = 0; i < cntA; i++)
    {
        cin >> a[i];
        frec[i] = 0;
    }
    while(cntC < n)
    {
        if(frec[cntC + 1] == 0)
        {
            while(a[cntA - 1] != cntC + 1)
            {
                cntA--;
                b[cntB] = a[cntA];
                frec[a[cntA]] = 1;
                cntB++;
                rez[k] = 0;
                rez[k + 1] = 1;
                k += 2;
            }
            cntA--;
            frec[a[cntA]] = 2;
            cntC++;
            rez[k] = 0;
            rez[k + 1] = 2;
            k += 2;
        }
        if(frec[cntC + 1] == 1)
        {
            if(b[cntB - 1] != cntC + 1)
            {
                ok = false;
                break;
            }
            cntB--;
            frec[b[cntB]] = 2;
            cntC++;
            rez[k] = 1;
            rez[k + 1] = 2;
            k += 2;
        }
    }
    if(!ok)
    {
        k = 0;
    }
    cout << k / 2 << '\n';
    for(int i = 0; i < k; i += 2)
    {
        cout << (char)(rez[i] + 'A') << ' ' << (char)(rez[i + 1] + 'A') << '\n';
    }
}