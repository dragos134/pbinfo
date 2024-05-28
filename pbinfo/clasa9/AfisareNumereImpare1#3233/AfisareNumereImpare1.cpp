#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = n; i > 0; i--)
    {
        //verificam daca i este impar
        if (i % 2)  
        {
            //afisam i
            cout << i << ' ';
        }
    }
}