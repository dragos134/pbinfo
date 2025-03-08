#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x, sp = 0, spe = 0, cnt10 = 0, sdiv3 = 0;
    vector<int> v;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;

        // suma pare
        if (x % 2 == 0)
        {
            sp += x;
        }

        // suma de pe pozitii pare
        if (i % 2)
        {
            spe += x;
        }

        // nr divizibile cu 10
        if (x % 10 == 0)
        {
            cnt10++;
        }

        // suma nr divizibile cu 3 de
        // pe pozitii impare
        if (x % 3 == 0 && i % 2 == 0)
        {
            sdiv3 += x;
        }

        v.push_back(x);
    }

    // afisare inversa
    for (int i = n - 1; i >= 0; i--)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
    cout << sp << endl;
    cout << spe << endl;
    cout << cnt10 << endl;
    cout << sdiv3 << endl;
    return 0;
}