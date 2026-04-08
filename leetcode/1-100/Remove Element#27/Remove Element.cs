namespace problem
{
    // #ToReview
    public class RemoveElement
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int RemoveElement(int[] nums, int val)
        {
            int n = nums.Length;
            int i = 0, j = 0, swap;
            while (i < n - j)
            {
                if (nums[i] == val)
                {
                    swap = nums[i];
                    nums[i] = nums[n - j - 1];
                    nums[n - j - 1] = swap;
                    j++;
                }
                else
                {
                    i++;
                }
            }

            return n - j;
        }
    }
}