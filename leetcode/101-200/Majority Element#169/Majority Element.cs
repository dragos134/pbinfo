namespace problem
{
    public class MajorityElement
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int MajorityElement(int[] nums)
        {
            Dictionary<int, int> numsCount = new Dictionary<int, int>();
            int n = nums.Length;
            for (int i = 0; i < n; i++)
            {
                numsCount.TryAdd(nums[i], 0);
            }

            for (int i = 0; i < n; i++)
            {
                numsCount[nums[i]]++;
            }

            var maxCount = 0;
            var maxNum = 0;
            foreach (var (key, value) in numsCount)
            {
                if (value > maxCount)
                {
                    maxCount = value;
                    maxNum = key;
                }
            }
            return maxNum;
        }
    }
}