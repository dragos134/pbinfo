#include <iostream>

using namespace std;

long long suma_dinti(int n, long long p)
{
    if(n > 1)
    {
        return n * p + suma_dinti(n - 1, p * 2);
    }
    return p;
}

int main()
{
    int n, p = 1;
    cin >> n;
    cout << suma_dinti(n, p);
    return 0;
}