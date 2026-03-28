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

    for(int i = 0; i < k - 1; i++)
    {
        for(int j = i + 1; j < k; j++)
        {
            int l = n / k, cnt = 0;
            for(int z = 0; z < l; z++)
            {
                if(a[i * l + z] == a[j * l + z])
                {
                    cnt++;
                }
            }
            if(cnt == l)
            {
                cout << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
    }

    cout << "NU";

    return 0;
}