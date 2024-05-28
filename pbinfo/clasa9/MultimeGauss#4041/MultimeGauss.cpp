#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x;
    cin >> x;

    cout << (int)(sqrt(2 * x - 1.75) + 0.5);
    return 0;
}


/*
n(n - 1) / 2 + 1<= x <= n(n + 1) / 2         

n(n - 1) + 2 <= 2x <= n(n + 1)            

n^2 - n + 2 <= 2x <= n^2 + n              

(n - 0.5)^2 + 2 <= 2x + 0.25 <= (n + 0.5)^2

sqrt(2x + 0.25) <= n + 0.5
sqrt(2x + 0.25) - 0.5 <= n

sqrt(2x + 0.25) - 0.5 <= n <= sqrt(2x - 1.75) + 0.5

n^2 - n + 1/4 < 2x + 1/4 < n^2 + n + 1/4

(n - 1/2)^2 < 2x + 1/4 < (n + 1/2)^2

n - 1/2 < sqrt(2x + 1/4) < n + 1/2

n < sqrt(2x + 1/4) + 1/2 < n + 1

sqrt(2x + 1/4) - 1/2 < n < sqrt(2x + 1/4) + 1/2

log(n^2 - n) < log(2x) < log(n^2 + n)

log(n^2 - n) < 1 + log(x) < log(n^2 + n)

d = 1 + 8x  n1, n2 = (1 +- sqrt(d)) / 2   (1 - sqrt(d) / 2) < n(n - 1) < (1 + sqrt(d)) / 2 

sqrt(n^2 - n) < sqrt(2x) < sqrt(n^2 + n)


*/