#include <stdio.h>
#include <math.h>

int main()
{
    int n, x, i = 0;
    long s = 0;
    if (scanf("%d", &n) != 1)
    {
        printf("eorare");
    }
    while (i < n)
    {
        i++;
        scanf("%d", &x);
        s = s + x * x;
    }
    printf("%.2f", sqrt(s) / sqrt(n));
    return 0;
}