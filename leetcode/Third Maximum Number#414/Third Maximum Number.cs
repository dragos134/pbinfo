namespace problem
{
    public class ThirdMaximumNumber
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var result = test.ThirdMax([-2147483648, -2147483648, -2147483648, -2147483648, 1, 1, 1]);
            Console.WriteLine(result);
        }
    }

    public class Solution
    {
        public int ThirdMax(int[] nums)
        {
            int max1 = int.MinValue, max2 = int.MinValue, max3 = int.MinValue;
            int s_size = nums.Length;
            int nr_max = 0;
            bool has_lowest_min = false;

            for (int i = 0; i < s_size; i++)
            {
                if (nums[i] == int.MinValue && max3 == int.MinValue && !has_lowest_min)
                {
                    nr_max++;
                    has_lowest_min = true;
                }
                if (nums[i] > max1)
                {
                    max3 = max2;
                    max2 = max1;
                    max1 = nums[i];
                    nr_max++;
                }
                else if (nums[i] < max1 && nums[i] > max2)
                {
                    max3 = max2;
                    max2 = nums[i];
                    nr_max++;
                }
                else if (nums[i] > max3 && nums[i] < max2)
                {
                    max3 = nums[i];
                    nr_max++;
                }
            }
            if (nr_max > 2)
            {
                return max3;
            }
            return max1;
        }
    }
}