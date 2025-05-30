#include <iostream>
#include <string.h>

using namespace std;

const char* letters = "abcdefghijklmnopqrstuvwxyz";

int main()
{
    char s[256], scpy[256];
    cin.getline(s, 256);
    strcpy(scpy, s);
    int s_size = strlen(s), maxlen = 0;
    char *word = strtok(scpy, " ");
    while(word != NULL)
    {
        int wrd_size = strlen(word);
        bool is_word = false;
        for(int i = 0; i < wrd_size; i++)
        {
            if(strchr(letters, word[i]))
            {
                is_word = true;
                break;
            }
        }
        if(wrd_size > maxlen && is_word)
        {
            maxlen = wrd_size;
        }
        word = strtok(NULL, " ");
    }
    strcpy(scpy, s);
    word = strtok(s, " ");
    while(word != NULL)
    {
        int wrd_size = strlen(word);
        bool is_word = false;
        for(int i = 0; i < wrd_size; i++)
        {
            if(strchr(letters, word[i]))
            {
                is_word = true;
                break;
            }
        }
        
        if(wrd_size == maxlen && is_word)
        {
            for(int i = 0; i < wrd_size / 2; i++)
            {
                char aux = word[i];
                word[i] = word[wrd_size - i - 1];
                word[wrd_size - i - 1] = aux;
            }
        }
        cout << word;
        strcpy(scpy, scpy + wrd_size);
        int i = 0;
        while(scpy[i] == ' ')
        {
            cout << ' ';
            i++;
        }
        strcpy(scpy, scpy + i);
        word = strtok(NULL, " ");
    }

    return 0;
}