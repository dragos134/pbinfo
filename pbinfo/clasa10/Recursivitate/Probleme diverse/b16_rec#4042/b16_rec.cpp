#include <iostream>

using namespace std;

char nr_to_b16(int n)
{
    if(n >= 16)
    {
        return -1;
    }
    if(n > 9)
    {
        return n - 10 + 'A';
    }
    return n + '0';
}

void b16_string(long long n)
{
    if(n >= 16)
    {
        b16_string(n / 16);
    }
    cout << nr_to_b16(n % 16);
}

int main()
{
    long long n;
    cin >> n;
    b16_string(n);
    return 0;
}