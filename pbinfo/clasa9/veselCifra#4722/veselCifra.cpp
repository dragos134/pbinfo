#include <iostream>

using namespace std;

int main()
{
    long long n;
    int s = 0;
    cin >> n;
    while(n > 9)
    {
        s += n % 10;
        n /= 10;
    }

    if(n == s)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }

    return 0;
}