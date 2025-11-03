#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char s[101], c[101], new_s[101];
    cin.getline(s, 101);
    cin.getline(c, 101);
    int n = strlen(s);
    if(n != strlen(c))
    {
        cout << "cod incorect";
        return 0;
    }
    int nr_par = 0, nr_impar = 0;
    for(int i = 0; i < n; i++)
    {
        new_s[i] = 'a';
        if((c[i] - '0') % 2)
        {
            nr_impar++;
        }
        else
        {
            nr_par++;
        }
    }
    new_s[n] = '\0';

    for(int i = 0; i < n; i++)
    {
        if((c[i] - '0') % 2)
        {
            new_s[n - nr_impar] = s[i];
            nr_impar--;
        }
        else
        {
            nr_par--;
            new_s[nr_par] = s[i];
        }
    }

    cout << new_s;

    return 0;
}