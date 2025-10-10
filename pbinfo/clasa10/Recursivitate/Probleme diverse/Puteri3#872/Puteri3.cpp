#include <iostream>

using namespace std;

void puteri_doi(int n, int p)
{
    if(n % 2 == 1)
    {
        cout << p << ' ';
    }
    if(n > 1)
    {
        puteri_doi(n / 2, p * 2);
    }
}

int main()
{
    int n;
    cin >> n;
    puteri_doi(n, 1);
    return 0;
}