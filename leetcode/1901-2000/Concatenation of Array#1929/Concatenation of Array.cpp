#include <iostream>
#include <vector>
using namespace std;

vector<int> getConcatenation(vector<int>& nums)
{
    int v_size = nums.size();
    for(int i = 0; i < v_size; i++)
    {
        nums.push_back(nums[i]);
    }
    return nums;
}

int main()
{

    return 0;
}