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

    // sortare la mana
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    //verificam elementul din mijloc cati vecini la fel
    int p_max = n / 2;

    while(a[p_max] == a[n / 2] && p_max < n)
    {
        p_max++;
    }

    if(p_max - n / 2 + 1 > k)
    {
        cout << a[n / 2];
    }
    else
    {
        cout << a[n / 2] + 1;
    }

    return 0;
}