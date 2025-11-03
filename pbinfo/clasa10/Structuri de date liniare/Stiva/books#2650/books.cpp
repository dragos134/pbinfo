#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, cnt, x;
    cin >> n;
    cnt = n;
    vector<int> a(n), frec(n, 1);
    for(int i = n - 1; i >= 0; i--)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        int nrScoase = 0;
        if(frec[x - 1] == 1)
        {
            while(cnt > 0 && a[cnt - 1] != x)
            {
                frec[a[cnt - 1] - 1] = 0;
                cnt--;
                nrScoase++;
            }
            frec[x - 1] = 0;
            cnt--;
            nrScoase++;
            cout << nrScoase << ' ';
        }
        else
        {
            cout << 0 << ' ';
        }
    }
    return 0;
}