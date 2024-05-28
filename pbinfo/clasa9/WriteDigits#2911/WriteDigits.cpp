#include <iostream>
using namespace std;

int main()
{
    int n, mirror_n = 0;
    cin >> n;
    while(n)
    {
        mirror_n = 10 * mirror_n + n % 10;
        n = n / 10;
    }
    cout << mirror_n;

}