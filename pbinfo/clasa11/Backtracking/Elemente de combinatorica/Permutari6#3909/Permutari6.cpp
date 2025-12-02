#include <iostream>

using namespace std;

int a, b, sol[8], folosit[8];

void afisare()
{
    for(int i = 0; i <= b - a; i++)
    {
        cout << sol[i] << ' ';
    }
    cout << '\n';
}

void back(int step)
{
    for(int i = a; i <= b; i++)
    {
        if(folosit[i - a])
        {
            continue;
        }
        folosit[i - a] = 1;
        sol[step - 1] = i;

        if(step == b - a + 1)
        {
            afisare();
        }

        if(step < b - a + 1)
        {
            back(step + 1);
        }

        folosit[i - a] = 0;
    }
}

int main()
{
    cin >> a >> b;

    back(1);

    return 0;
}