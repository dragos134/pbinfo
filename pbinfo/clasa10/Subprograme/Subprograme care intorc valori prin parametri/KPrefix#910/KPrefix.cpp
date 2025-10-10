#include <iostream>
using namespace std;

void prefix(int n, int k, int &x)
{
    int cpyN = n, cifN = 0;
    while(cpyN)
    {
        cifN++;
        cpyN /= 10;
    }

    while(cifN - k)
    {
        n /= 10;
        cifN--;
    }
    x = n;
}

int main()
{

}