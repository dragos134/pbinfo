#include <iostream>

using namespace std;

int main()
{
    int n;
    unsigned long long z;
    cin >> n;
    while(n)
    {
        n--;
        cin >> z;
        cout << z % 7 << '\n';
    }
    return 0;
}