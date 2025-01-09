#include <iostream>

using namespace std;

short nr_cif(int x)
{
    short cif = 0;
    while(x)
    {
        cif++;
        x /= 10;
    }
    return cif;
}

bool este_rotund(int x)
{
    short cif = nr_cif(x);
    int uc = 0, p = 1;
    for (int i = 0; i < cif / 2; i++)
    {
        uc = (x % 10) * p + uc;
        p *= 10;
        x /= 10;
    }
    if(cif % 2)
    {
        x /= 10;
    }
    return x == uc;
}


int main()
{
    short n, cnt = 0;
    int x;
    cin >> n;
    while(n)
    {
        n--;
        cin >> x;
        if(este_rotund(x))
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}