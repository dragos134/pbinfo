#include <iostream>

using namespace std;

int putere_rec(int a, int b)
{
    if(b == 0)
    {
        return 1;
    }
    if(b > 1)
    {
        return a * putere_rec(a, b - 1);
    }
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << putere_rec(a, b);
    return 0;
}