#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    char *word = strtok(s, " ");
    while(word != NULL)
    {
        if (isupper(word[0]))
        {
            cout << word[0];
        }

        word = strtok(NULL, " ");
    }
    return 0;
}