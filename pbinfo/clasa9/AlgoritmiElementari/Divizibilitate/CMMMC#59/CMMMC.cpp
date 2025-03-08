#include <iostream>

using namespace std;
int cmmdc(int a, int b)
{
    int cpy;
    if(a < b)
    {
        swap(a, b);
    }

    while(a && b)
    {
        cpy = b;
        b = a % b;
        a = cpy;
    }

    return a + b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << a / cmmdc(a, b) * b;
    return 0;
}