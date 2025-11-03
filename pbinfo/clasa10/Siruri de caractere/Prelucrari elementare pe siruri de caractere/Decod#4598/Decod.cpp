#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char t[101], c[101], new_t[101];
    cin.getline(t, 101);
    cin.getline(c, 101);
    int n = strlen(t);
    if(n != strlen(c))
    {
        cout << "cod incorect";
        return 0;
    }
    int nr_par = 0, nr_impar = 0;
    for(int i = 1; i < n; i++)
    {
        if((c[i] - '0') % 2)
        {
            nr_impar++;
        }
        else
        {
            nr_par++;
        }
    }
    new_t[0] = t[nr_par];
    new_t[n] = '\0';
    for(int i = 1; i < n; i++)
    {
        if((c[i] - '0') % 2)
        {
            new_t[i] = t[n - nr_impar];
            nr_impar--;
        }
        else
        {
            nr_par--;
            new_t[i] = t[nr_par];
        }
    }
    cout << new_t;
    return 0;
}