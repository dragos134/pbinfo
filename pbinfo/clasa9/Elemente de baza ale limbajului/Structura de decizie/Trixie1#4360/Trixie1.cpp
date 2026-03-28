#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c1_a = a % 10, c2_a = a / 10 % 10, c3_a = a / 100, c1_b = b % 10, c2_b = b / 10 % 10, c3_b = b /100;
    int cond1 = c1_a == c1_b && c2_a == c2_b && c3_a == c3_b;
    int cond2 = c1_a == c1_b && c2_a == c3_b && c3_a == c2_b;
    int cond3 = c1_a == c2_b && c2_a == c1_b && c3_a == c3_b;
    int cond4 = c1_a == c2_b && c2_a == c3_b && c3_a == c1_b;
    int cond5 = c1_a == c3_b && c2_a == c1_b && c3_a == c2_b;
    int cond6 = c1_a == c3_b && c2_a == c2_b && c3_a == c1_b;
    
    if(cond1 || cond2 || cond3 || cond4 || cond5 || cond6)
    {
        cout << "DA";
    }
    else
    {
        cout << "NU";
    }
    return 0;
}