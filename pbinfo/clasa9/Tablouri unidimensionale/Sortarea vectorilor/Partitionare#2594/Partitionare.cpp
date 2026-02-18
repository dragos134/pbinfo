#include <iostream>

using namespace std;

int main()
{
    int n, a[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // partitionare
    int ultimul_par = -1;
    for(int i = 0; i < n - 1; i++)
    {
        if(a[i] % 2 == 0)
        {
            ultimul_par = i;
            continue;
        }
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] % 2 == 0)
            {
                swap(a[i], a[j]);
                
                ultimul_par = i;
                break;
            }
        }
    }

    //sortare 1
    for(int i = 0; i < ultimul_par; i++)
    {
        for(int j = i + 1; j <= ultimul_par; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }

    //sortare 2
    for(int i = ultimul_par + 1; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}