#include <iostream>

using namespace std;

int Paianjen(int n, int m)
{
    int rezN = 0, rezM = 0;
    if(n > 0)
    {
        rezN = Paianjen(n - 1, m);
    }
    if(m > 0)
    {
        rezM = Paianjen(n, m - 1);
    }
    if(n == 0 && m == 0)
    {
        return 1;
    }
    return rezN + rezM;
}

int main()
{
    int n, m;
    cin >> n >> m;
    cout << Paianjen(n - 1, m - 1);
    return 0;
}