#include <iostream>

using namespace std;

int este_vocala(char c)
{
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    }
    return 0;
}

int main()
{
    int n, b[4000];
    char a[4000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = i;
    }

    // separare vocale de consoane
    for(int i = 0; i < n - 1; i++)
    {
        if(este_vocala(a[i]) == 1) continue;
        for(int j = i + 1; j < n; j++)
        {
            if(este_vocala(a[j]) == 1)
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    // sortare dupa indecsii initiali
    for(int i = 0 ; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(este_vocala(a[i]) == este_vocala(a[j]) && b[i] > b[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}