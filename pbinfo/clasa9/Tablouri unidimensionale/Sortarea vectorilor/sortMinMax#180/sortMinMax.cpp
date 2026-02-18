#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], i_min, i_max, nr_min = 1000000, nr_max = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] < nr_min)
        {
            nr_min = a[i];
            i_min = i;
        }
        if(a[i] > nr_max)
        {
            nr_max = a[i];
            i_max = i;
        }
    }

    int start = min(i_min, i_max);
    int end = max(i_min, i_max);

    for(int i = start; i < end; i++)
    {
        for(int j = i + 1; j <= end; j++)
        {
            if(a[i] > a[j])
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}