#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, l;
    cin >> n >> l;
    
    printf("%.2f", n * l * l * cos(M_PI / n) / sin(M_PI / n) / 4);
    return 0;
}