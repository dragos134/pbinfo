#include <iostream>

using namespace std;

int n, sol[10], col_folosita[10], diag_folosita[19];

void afisare()
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(sol[i] != j)
            {
                cout << "- ";
            }
            else
            {
                cout << "+ ";
            }
        }
        cout << '\n';
    }
}

void back(int step)
{
    
}

int main()
{

    return 0;
}