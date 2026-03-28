#include <iostream>

using namespace std;

int main()
{
    int n, k, a[1000];
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = 0; i < n - k; i++)
    {
        for(int j = i + 1; j <= n - k; j++)
        {
            int cnt = 0;
            for(int z = 0; z < k; z++)
            {
                if(a[i + z] == a[j + z])
                {
                    cnt++;
                }
            }
            if(cnt == k)
            {
                cout << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
    }

    cout << "NU";

    return 0;
}