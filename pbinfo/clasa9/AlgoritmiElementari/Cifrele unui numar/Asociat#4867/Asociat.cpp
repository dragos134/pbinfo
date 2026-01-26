#include <iostream>

using namespace std;

int main()
{
    int n, m, s1 = 0, s2 = 0;
    cin >> n >> m;
    while(n)
    {
        s1 += n % 10;
        n /= 10;
    }
    while(m)
    {
        s2 += m % 10;
        m /= 10;
    }

    if((s1 % 2 == 0 || s1 % 3 == 0 || s1 % 5 ==0) && (s2 % 2 == 0 || s2 % 3 == 0 || s2 % 5 == 0))
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}