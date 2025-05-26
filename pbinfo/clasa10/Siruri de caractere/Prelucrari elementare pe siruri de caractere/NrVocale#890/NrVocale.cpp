#include <iostream>
#include <string.h>

using namespace std;

const char *vocale = "aeiou";

int main()
{
    char s[256], voc_max = ' ';
    cin.getline(s, 256);
    int s_size = strlen(s), nr_voc_max = 0, nr_voc;
    for(int i = 0; i < 10; i++)
    {
        nr_voc = 0;
        for(int j = 0; j < s_size; j++)
        {   
            if(vocale[i] == tolower(s[j]))
            {
                nr_voc++;
            }
        }
        if(nr_voc >= nr_voc_max)
        {
            nr_voc_max = nr_voc;
            voc_max = vocale[i];
        }
    }
    cout << (char)(toupper(voc_max));
    return 0;
}
