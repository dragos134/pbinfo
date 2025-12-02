#include <iostream>

using namespace std;

int main()
{
    int n, m, a[501], ans[2000], nr_ans = 0;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        a[i] = i;
    }

    while(m)
    {
        m--;
        int op, c1, c2;
        cin >> op >> c1 >> c2;
        if(op == 1)
        {
            if(a[c1] != a[c2])
            {
                int newc = a[c2];
                for(int i = 1; i <= n; i++)
                {
                    if(a[i] == newc)
                    {
                        a[i] = a[c1];
                    }
                }
            }
        }
        if(op == 2)
        {
            ans[nr_ans++] = a[c1] == a[c2];
        }
    }

    for(int i = 0; i < nr_ans; i++)
    {
        if(ans[i])
        {
            cout << "DA\n";
        }
        else
        {
            cout << "NU\n";
        }
    }

    return 0;
}