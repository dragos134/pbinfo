#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b - 1 << endl;
    if(a % 2 == 0)
    {
        cout << "para";
    }
    else
    {
        cout << "mar";
    }
    return 0;
}