#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("hex.in");
ofstream fout("hex.out");

char digit_to_hex(int digit)
{
    if(digit < 10)
        return digit + '0';
    return digit - 10 + 'A';
}

int main()
{
    int n, s = 0, p = 1;
    char nr[10001];
    fin >> nr;
    n = strlen(nr);
    
    for(int i = n % 4 - 1; i >= 0 ; i--)
    {
        s = s + (nr[i] - '0') * p;
        p *= 2;
    }
    if(s)
    {
        fout << digit_to_hex(s);
    }

    for(int i = n % 4; i < n; i += 4)
    {
        s = 8 * (nr[i] - '0') + 4 * (nr[i + 1] - '0') + 2 * (nr[i + 2] - '0') + (nr[i + 3] - '0');
        fout << digit_to_hex(s);
    }
    return 0;
}