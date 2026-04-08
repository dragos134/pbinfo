namespace problem
{
    public class DissapearedNumbers
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var result = test.FindDisappearedNumbers([1]);
            foreach(var i in result)
            {
                Console.Write($"{i} ");
            }
        }
    }

    public class Solution
    {
        public IList<int> FindDisappearedNumbers(int[] nums)
        {
            int s_size = nums.Length;
            int poz_count = s_size;
            for(int i = 0; i < s_size; i++)
            {
                int value = Math.Abs(nums[i]);
                int index = value - 1;
                if(nums[index] > 0)
                {
                    poz_count--;
                    nums[index] = -nums[index];
                }
            }

            int[] result = new int[poz_count];
            int k = 0;
            for(int i = 0; i < s_size; i++)
            {
                if(nums[i] > 0)
                {
                    result[k++] = i + 1;
                }
            }

            return result;
        }
    }
}