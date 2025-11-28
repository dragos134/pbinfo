#include <iostream>

using namespace std;

int main()
{
    long long t, n, k, a[1000];
    cin >> t;
    while(t)
    {
        t--;
        cin >> n >> k;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long s_max = 0;
        for(int i = 0; i < k; i++)
        {
            int k_max = 0;
            for(int j = i; j < n; j += k)
            {
                if(a[j] > k_max)
                {
                    k_max = a[j];
                }
            }
            s_max += k_max;
        }
        cout << s_max << '\n';
    }
    return 0;
}