#include <string.h>
#include <iostream>

using namespace std;

const char *vocale = "aeiou";

bool este_vocala(char l)
{
    if(strchr(vocale, l))
        return true;
    return false;
}

int main()
{
    char s[21];
    cin.getline(s, 21);
    for(int i = 0; i < strlen(s); i++)
    {
        if(este_vocala(s[i]))
        {
            s[i] = toupper(s[i]);
        }
    }
    cout << s;
    return 0;
}