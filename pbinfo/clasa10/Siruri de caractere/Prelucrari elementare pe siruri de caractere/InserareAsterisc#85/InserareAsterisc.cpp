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
    char s[101], s_cpy[202];
    cin.getline(s, 101);
    strcpy(s_cpy, s);
    int s_size = strlen(s), nr_asc = 0;
    bool are_vocale = false;
    for(int i = 0; i < s_size; i++)
    {
        if(este_vocala(s[i]))
        {
            are_vocale = true;
            strcpy(s_cpy + i + 2 + nr_asc, s + i + 1);
            s_cpy[i + 1 + nr_asc] = '*';
            nr_asc++;
        }
    }
    if(are_vocale)
        cout << s_cpy;
    else
        cout << "FARA VOCALE";
    return 0;
}