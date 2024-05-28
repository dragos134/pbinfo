#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(a + b < c || a + c < b || b + c < a)
    {
        cout << "Imposibil";
        return 0;
    }

    //prima mediana
    printf("%.2f ", sqrt(2 * b * b + 2 * c * c - a * a) / 2);

    //a doua mediana
    printf("%.2f ", sqrt(2 * c * c + 2 * a * a - b * b) / 2);

    // a treia mediana
    printf("%.2f", sqrt(2 * a * a + 2 * b * b - c * c) / 2);
    return 0;
}