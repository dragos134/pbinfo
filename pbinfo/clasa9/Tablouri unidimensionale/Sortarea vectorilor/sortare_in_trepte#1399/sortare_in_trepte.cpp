#include <iostream>

using namespace std;

int main()
{
    int n, a[1000], nr_zero = 0, nr_neg = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            nr_zero++;
        }
        if(a[i] < 0)
        {
            nr_neg++;
        }
    }

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

    for(int i = 0; i < nr_neg - 1; i++)
    {
        for(int j = i + 1; j < nr_neg; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = nr_neg + nr_zero; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}