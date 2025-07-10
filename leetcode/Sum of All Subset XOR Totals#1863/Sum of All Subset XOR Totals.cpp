#include <iostream>
#include <vector>

using namespace std;

int subsetXORSum(vector<int>& nums)
{
    int sum = 0;
    int v_size = nums.size();
    for(int i = 0; i < v_size - 1; i++)
    {
        sum += nums[i] ^ nums[i + 1];
    }
    return sum;
}

int main()
{
    return 0;
}