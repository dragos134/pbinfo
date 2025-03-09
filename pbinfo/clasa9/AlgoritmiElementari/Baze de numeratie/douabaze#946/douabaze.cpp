#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int n = s.size();
    if(n % 2 == 1)
    {
        cout << 1;
    }
    for(int i = n % 2; i < s.size() - 1; i += 2)
    {
        cout << 2 * (s[i] - 48) + (s[i + 1] - 48);
    }
    return 0;
}

