namespace problem
{
    // Missing Number - #268
    // https://leetcode.com/problems/missing-number

    public class MissingNumber
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int MissingNumber(int[] nums)
        {
            int sum = 0, n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                sum += nums[i];
            }
            return n * (n + 1) / 2 - sum;
        }
    }
}