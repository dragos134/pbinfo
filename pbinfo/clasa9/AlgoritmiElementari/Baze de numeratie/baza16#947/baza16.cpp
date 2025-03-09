#include <iostream>

using namespace std;

char digit_to_hex(int digit)
{
    if(digit < 10)
        return digit + '0';
    return digit - 10 + 'A';
}

int main()
{
    long long n;
    char hex[11];
    short hexSize = 0;
    cin >> n;
    while(n)
    {
        hex[hexSize++] = digit_to_hex(n % 16);
        n /= 16;
    }
    for(int i = 0; i < hexSize; i++)
        cout << hex[hexSize - i - 1];
    return 0;
}
