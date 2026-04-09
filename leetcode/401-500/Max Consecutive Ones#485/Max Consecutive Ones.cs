namespace problem
{
    // Max Consecutive Ones - #485
    // https://leetcode.com/problems/max-consecutive-ones

    public class ConsecutiveOnes
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int FindMaxConsecutiveOnes(int[] nums)
        {
            int nums_size = nums.Length, max_len = 0, cur_len = 0;
            for(int i = 0; i <= nums_size; i++)
            {
                if(i < nums_size && nums[i] == 1)
                {
                    cur_len++;
                }
                else
                {
                    if(cur_len > max_len)
                    {
                        max_len = cur_len;
                    }
                    cur_len = 0;
                }
            }

            return max_len;
        }
    }
}