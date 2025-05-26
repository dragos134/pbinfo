#include <string.h>
#include <iostream>

using namespace std;

const char *vocale = "aeiou";
const char *consoane = "bcdfghjklmnpqrstvwxyz";

bool este_vocala(char l)
{
    if(strchr(vocale, l))
        return true;
    return false;
}
bool este_consoana(char l)
{
    if(strchr(consoane, l))
        return true;
    return false;
}

int main()
{
    char s[255];
    int cnt = 0;
    cin.getline(s, 255);
    char *word = strtok(s, " ");
    while(word != NULL)
    {
        int word_size = strlen(word);
        for(int i = 1; i < word_size - 1; i++)
        {
            if(este_consoana(word[i - 1]) && este_vocala(word[i]) && este_consoana(word[i + 1]))
            {
                cnt++;
            }
        }
        word = strtok(NULL, " ");
    }
    cout << cnt;
    return 0;
}