#include <iostream>
#include <vector>

using namespace std;

vector<int> buildArray(vector<int>& nums)
{
    int a_size = nums.size();
    vector<int> ans(a_size);
    for(int i = 0; i < a_size; i++)
    {
        ans[i] = nums[nums[i]];
    }
    return ans;
}

int main()
{
    return 0;
}