namespace problem
{
    public class RemoveDuplicates
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int RemoveDuplicates(int[] nums)
        {
            if (nums.Length == 1) return 1;
            int i = 0, k = 0;
            int numsSize = nums.Length;
            while (i < numsSize - 1)
            {
                while (i < numsSize - 1 && nums[i] == nums[i + 1])
                {
                    i++;
                }
                nums[k] = nums[i];
                k++;
                i++;
            }
            if (nums[numsSize - 1] != nums[numsSize - 2])
            {
                nums[k] = nums[numsSize - 1];
                k++;
            }
            return k;
        }
    }
}