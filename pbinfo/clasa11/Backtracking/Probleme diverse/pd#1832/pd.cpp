#include <iostream>

using namespace std;

const int MAX = 1000;

int n, div_vec[MAX], nr_div = 0, ok = 0, sol[100];

void populare()
{
    int i = 2, start = 0;
    for(; i * i < n; i++)
    {
        if(n % i == 0)
        {
            div_vec[nr_div / 2] = i;
            div_vec[MAX - nr_div / 2 - 1] = n / i;
            nr_div += 2;
        }
    }
    if(i * i == n)
    {
        div_vec[nr_div / 2] = i;
        nr_div++;
        start = 1;
    }
    for(int k = nr_div / 2 + start; k < nr_div; k++)
    {
        div_vec[k] = div_vec[MAX - nr_div + k];
    }
}

void afisare(int k)
{
    for(int i = 0; i < k; i++)
    {
        cout << sol[i] << ' ';
    }
    cout << '\n';
}

void back(int step, long long prod, int start)
{
    for(int i = start; i < nr_div; i++)
    {
        sol[step - 1] = div_vec[i];
        if(prod * sol[step - 1] > n)
        {
            break;
        }
        if(prod * sol[step - 1] == n)
        {
            afisare(step);
            ok = 1;
            break;
        }
        if(prod * sol[step - 1] < n)
        {
            back(step + 1, prod * sol[step - 1], i + 1);
        }
    }
}

int main()
{
    cin >> n;
    populare();
    for(int i = 0; i < nr_div; i++)
    {
        cout << div_vec[i] << ' ';
    }
    cout << '\n';
    back(1, 1, 0);
    if(ok == 0)
    {
        cout << "NU EXISTA";
    }
    return 0;
}