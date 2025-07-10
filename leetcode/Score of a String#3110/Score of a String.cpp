#include <iostream>

using namespace std;

int scoreOfString(string s)
{
    int s_size = s.length(), score = 0;
    for(int i = 0; i < s_size - 1; i++)
    {
        score += abs(s[i] - s[i + 1]);
    }
    return score;
}

int main()
{
    cout << scoreOfString("hello");
    return 0;
}