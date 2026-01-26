#include <iostream>

using namespace std;

int main()
{
    int n, cpyn, s = 0, nr_cif = 0, s_part = 0;
    cin >> n;
    cpyn = n;
    while(n)
    {
        s += n % 10;
        nr_cif++;
        n /= 10;
    }
    n = cpyn;

    for(int i = 0; i < nr_cif / 2; i++)
    {
        s_part += n % 10;
        n /= 10;
    }

    if(nr_cif % 2 == 0 && s - s_part == s_part)
    {
        cout << s_part;
    }
    else
    {
        cout << "NU";
    }

    return 0;
}