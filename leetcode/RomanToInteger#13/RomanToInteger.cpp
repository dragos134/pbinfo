#include <iostream>
#include <map>
using namespace std;

map<char, int> roman_to_int = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
};

int romanToInt(string s){
    int sum = 0;
    for(int i = 0; i < s.length() - 1; i++)
    {
        if(roman_to_int[s[i]] >= roman_to_int[s[i + 1]])
        {
            sum += roman_to_int[s[i]];
        }
        else
        {
            sum -= roman_to_int[s[i]];
        }
    }
    sum += roman_to_int[s[s.length() - 1]];
    return sum;
}

int main()
{
    cout << romanToInt("XXXIV");
    return 0;
}