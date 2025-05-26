#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

const char *adobe = "abdeo";

bool str_cmp(char l1, char l2)
{
    return tolower(l2) > tolower(l1);
}

int main()
{
    char s[100000];
    cin.getline(s, 100000);
    int s_size = strlen(s);

    for(int i = 0; i < s_size - 5; i++)
    {
        char substr[6];
        strncpy(substr, s + i, 5);
        sort(substr, substr + 5, str_cmp);
        cout << substr << '\n';
    }

    return 0;
}