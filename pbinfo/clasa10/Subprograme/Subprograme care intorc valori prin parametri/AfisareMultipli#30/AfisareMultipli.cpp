#include <iostream>

using namespace std;

void sub(int n, int k)
{
    while(n)
    {
        cout << n * k << ' ';
        n--;
    }
}

int main()
{
    sub(3, 5);
    return 0;
}