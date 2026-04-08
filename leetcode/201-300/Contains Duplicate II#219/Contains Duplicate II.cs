namespace problem
{
    // Contains Duplicate II - #219
    // https://leetcode.com/problems/contains-duplicate-ii

    // #ToReview - need to improve time
    public class ContainsDuplicateII
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool ContainsNearbyDuplicate(int[] nums, int k)
        {
            int n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                int limit = Math.Min(i + k, n - 1);
                for (int j = i + 1; j <= limit; j++)
                {
                    if (nums[i] == nums[j])
                    {
                        return true;
                    }
                }
            }
            return false;
        }
    }
}