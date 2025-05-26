#include <iostream>
#include <string.h>

using namespace std;

const char *vocale = "aeiou";
bool este_vocala(char l)
{
    if(strchr(vocale, tolower(l)))
        return true;
    return false;
}

int main()
{
    char s[21], s_cpy[21];
    cin.getline(s, 21);
    strcpy(s_cpy, s);
    int s_size = strlen(s), nr_voc = 0;
    for(int i = 0; i < s_size; i++)
    {
        if(este_vocala(s[i]))
        {
            strcpy(s_cpy + i - nr_voc, s + i + 1);
            nr_voc++;
        }
    }
    cout << s_cpy;
    return 0;
}