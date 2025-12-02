#include <iostream>

using namespace std;

int main()
{
    unsigned long long n;
    int a[50], i = 1, carry = 0;
    for(int i = 0; i < 50; i++)
    {
        a[i] = 0;
    }
    cin >> n;
    n--;
    while(n)
    {
        a[i++] = n % 10;
        a[0]++;
        n /= 10;
    }

    for(int i = 1; i <= a[0]; i++)
    {
        a[i] = a[i] * 2 + carry;
        carry = a[i] / 10;
        a[i] %= 10;
    }

    while(carry)
    {
        a[a[0] + 1] = carry;
        carry /= 10;
        a[a[0]] = a[a[0]] % 10;
        a[0]++;
    }

    for(int i = a[0]; i > 1; i--)
    {
        cout << a[i];
    }
    cout << a[1] + 1;

    return 0;
}