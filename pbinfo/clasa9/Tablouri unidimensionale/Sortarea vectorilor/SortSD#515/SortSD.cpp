#include <iostream>

using namespace std;

int sum_div(int nr)
{
    int s = 1 + nr, i;
    for(i = 2; i * i < nr; i++)
    {
        if(nr % i == 0)
        {
            s = s + i + nr / i;
        }
    }

    if(i * i == nr)
    {
        s += i;
    }

    return s;
}

int main()
{
    int n, a[1000], v_div[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        v_div[i] = sum_div(a[i]);
    }

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(v_div[i] > v_div[j] || (v_div[i] == v_div[j] && a[i] > a[j]))
            {
                int aux = a[i];
                a[i] = a[j];
                a[j] = aux;

                aux = v_div[i];
                v_div[i] = v_div[j];
                v_div[j] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }

    return 0;
}