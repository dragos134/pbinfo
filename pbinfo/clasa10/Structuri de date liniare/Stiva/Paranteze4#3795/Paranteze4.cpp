#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char sir[255], stv[255], cnt = 0, k = 0;
    cin.getline(sir, 255);
    int n = strlen(sir);
    for(int i = 0; i < n; i++)
    {
        if(sir[i] == '(')
        {
            stv[cnt] = k + 1;
            k++;
            cnt++;
        }
        else
        {
            cnt--;
            cout << int(stv[cnt]) << ' ';
        }
    }
    return 0;
}