#include <iostream>
using namespace std;

int main()
{
    long long n, vec[100000], min1_neg = 0, min2_neg = 0, max1_poz = 0, max2_poz = 0;

    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (vec[i] < 0 && vec[i] <= min1_neg)
        {
            min2_neg = min1_neg;
            min1_neg = vec[i];
        }

        if (vec[i] < 0 && vec[i] <= min2_neg && vec[i] > min1_neg)
        {
            min2_neg = vec[i];
        }

        if (vec[i] > 0 && vec[i] >= max1_poz)
        {
            max2_poz = max1_poz;
            max1_poz = vec[i];
        }

        if (vec[i] > 0 && vec[i] >= max2_poz && vec[i] < max1_poz)
        {
            max2_poz = vec[i];
        }
    }

    if  (n == 2)
    {
        cout << vec[0] * vec[1];
        return 0;
    }

    if (max2_poz * max1_poz > min1_neg * min2_neg)
    {
        cout << max2_poz * max1_poz;
    }
    else
    {
        cout << min1_neg * min2_neg;
    }

    return 0;
}