#include <iostream>

using namespace std;

int ultp_cif(int a, int n, int last)
{
    if(n == 1)
    {
        return a % last;
    }
    if(n % 2)
    {
        long long temp_rez = (a % last) * (ultp_cif(a, n - 1, last) % last);
        return temp_rez % last;
    }
    long long rez = ultp_cif(a, n / 2, last) % last;
    return (rez * rez) % last;
}

int main()
{
    int a, n, p, t = 1;
    cin >> a >> n >> p;
    while(p)
    {
        t *= 10;
        p--;
    }
    cout << ultp_cif(a, n, t);
    return 0;
}