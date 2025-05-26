#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

bool str_cmp(char l1, char l2)
{
    return l2 > l1;
}

int main()
{
    char s[42];
    cin.getline(s, 42);
    char *word1 = strtok(s, " ");
    char *word2 = strtok(NULL, " ");
    int sz1 = strlen(word1), sz2 = strlen(word2);
    bool sunt_anagrame = true;
    sort(word1, word1 + sz1, str_cmp);
    sort(word2, word2 + sz2, str_cmp);
    
    if(strcmp(word1, word2) == 0)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    return 0;
}