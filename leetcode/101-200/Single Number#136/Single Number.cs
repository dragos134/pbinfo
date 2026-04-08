namespace problem
{
    public class SingleNumber
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int SingleNumber(int[] nums)
        {
            int n = nums.Length;
            int result = 0;
            for (int i = 0; i < n; i++)
            {
                result = result ^ nums[i];
            }
            return result;
        }
    }
}