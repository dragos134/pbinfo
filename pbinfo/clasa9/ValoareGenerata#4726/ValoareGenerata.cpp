#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int p1 = 10, p2 = 10;
            int g1 = 0, g2 = 0;
            if(j > 9)
            {
                p1 = 100;
            }
            if(i > 9)
            {
                p2 = 100;
            }
            g1 = p1 * i + j;
            g2 = p2 * j + i;
            cout << min(g1, g2) << ' ';
        }
        cout << endl;
    }
    return 0;
}