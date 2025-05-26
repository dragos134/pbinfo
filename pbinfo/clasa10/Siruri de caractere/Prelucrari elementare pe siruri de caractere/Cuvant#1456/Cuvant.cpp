#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char s[101];
    cin.getline(s, 101);
    int s_size = strlen(s);
    bool are_vocale = false;
    bool are_consoane = false;
    for(int i = 0; i < s_size; i++)
    {
        if(strchr("bcdfghjklmnpqrstvwxyz", s[i]))
        {
            are_consoane = true;
        }
        if(strchr("aeou", s[i]))
        {
            are_vocale = true;
            break;
        }
    }
    if(!are_vocale && are_consoane)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}