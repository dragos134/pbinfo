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
    char s[101];
    cin.getline(s, 101);
    int s_size = strlen(s);
    for(int i = 0; i < s_size - 1; i++)
    {
        for(int j = i + 1; j < s_size; j++)
        {
            if(este_vocala(s[i]) && este_vocala(s[j]))
            {
                if(s[j] > s[i])
                {
                    char aux = s[i];
                    s[i] = s[j];
                    s[j] = aux;
                }
            }
        }
    }
    cout << s;
    return 0;
}