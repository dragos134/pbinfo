namespace problem
{
    public class SearchInsertPosition
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int SearchInsert(int[] nums, int target)
        {
            int left = 0, right = nums.Length;
            int middle = 0, middleIndex = 0;
            while (left < right)
            {
                middleIndex = (right + left) / 2;
                middle = nums[middleIndex];
                if (middle == target)
                {
                    return middleIndex;
                }
                if (target > middle)
                {
                    left = middleIndex + 1;
                }
                if (target < middle)
                {
                    right = middleIndex - 1;
                }
            }
            if (left < nums.Length - 1 && nums[left] < target && nums[left + 1] > target)
            {
                return left + 1;
            }

            return left;
        }
    }
}