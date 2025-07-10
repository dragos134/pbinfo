#include <iostream>
#include <vector>

using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x)
{
    vector<int> ans;
    int v_size = words.size();
    for(int i = 0; i < v_size; i++)
    {
        string w = words[i];
        size_t pos = w.find(x);
        if(pos != string::npos)
        {
            ans.push_back(i);
        }
    }
    return ans;
}

int main()
{
    vector<string> test = {"abc", "bcd", "aaaa", "cbc"};
    findWordsContaining(test, 'a');
    return 0;
}