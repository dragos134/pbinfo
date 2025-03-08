#include <iostream>
using namespace std;

bool are_p_div(int n, int p)
{
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            p -= 2;
        }
        if(i * i == n)
        {
            p++;
        }
        if(p <= 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    short n, p;
    int x;
    long long s = 0;
    cin >> n >> p;
    while(n)
    {
        n--;
        cin >> x;
        if(are_p_div(x, p))
        {
            s += x;
        }
    }

    cout << s;
    return 0;
}