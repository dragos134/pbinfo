#include <iostream>
using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    if (d == c)
    {
        printf("%.2f", 0);
        return 0;
    }
    printf("%.2f", (b * c - d * a) / (d - c));
    return 0;
}