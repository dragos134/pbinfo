#include <iostream>
using namespace std;

bool isPalindrome(int x){
    if (x < 0) return false;
    unsigned int inverse = 0;
    unsigned int original = x;
    while(x){
        inverse = inverse * 10 + x % 10;
        x /= 10;
    }
    return inverse == original;
}

int main()
{
    cout << isPalindrome(121);
}