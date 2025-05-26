#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[11], s_cpy[11];
    cin.getline(s, 11);
    int s_size = strlen(s);
    strcpy(s_cpy, s);

    for(int i = s_size; i > 0; i--)
    {
        s[i] = 0;
        cout << s << '\n';
    }
    
    for(int i = 0; i < s_size; i++)
    {
        cout << s_cpy + i << '\n';
    }
    return 0;
}