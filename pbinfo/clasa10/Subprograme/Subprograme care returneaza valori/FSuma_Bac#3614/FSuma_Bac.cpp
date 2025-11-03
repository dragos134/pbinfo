#include <iostream>

using namespace std;

int suma(int a, int b)
{
    int min_nr = min(a, b), i = 1, s = 0;
    for(i = 1; i <= min_nr; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            s = s + i;
        }
    }
    return s;
}

int main()
{
    cout << suma(20, 12);
    return 0;
}