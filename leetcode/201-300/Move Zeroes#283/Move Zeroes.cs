namespace problem
{
    // Move Zeroes - #283
    // https://leetcode.com/problems/move-zeroes

    public class MoveZeroes
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public void MoveZeroes(int[] nums)
        {
            int k = 0;
            for (int i = 0; i < nums.Length; i++)
            {
                if (nums[i] != 0)
                {
                    int aux = nums[i];
                    nums[i] = nums[k];
                    nums[k] = aux;
                    k++;
                }
            }
        }
    }
}