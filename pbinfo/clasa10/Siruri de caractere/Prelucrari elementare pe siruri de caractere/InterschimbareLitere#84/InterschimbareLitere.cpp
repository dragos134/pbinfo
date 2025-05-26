#include <iostream>
#include <string.h>
using namespace std;

const char *vocale = "aeiou";
const char *consoane = "bcdfghjklmnpqrstvwxyz";

bool este_vocala(char l)
{
    if(strchr(vocale, tolower(l)))
        return true;
    return false;
}
bool este_consoana(char l)
{
    if(strchr(consoane, tolower(l)))
        return true;
    return false;
}

int main()
{
    char s[11];
    cin.getline(s, 11);
    int s_size = strlen(s);
    int i_pv = -1, i_uc = -1;
    for(int i = 0; i < s_size; i++)
    {
        if(este_vocala(s[i]))
        {
            i_pv = i;
            break;
        }
    }

    for(int i = s_size - 1; i >= 0; i--)
    {
        if(este_consoana(s[i]))
        {
            i_uc = i;
            break;
        }
    }

    if((i_uc + 1) * (i_pv + 1) == 0)
    {
        cout << "IMPOSIBIL";
    }
    else
    {
        char aux = s[i_uc];
        s[i_uc] = s[i_pv];
        s[i_pv] = aux;
        cout << s;
    }
    return 0;
}