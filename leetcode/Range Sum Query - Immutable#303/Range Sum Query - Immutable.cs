namespace problem
{
    public class RangeSumQuery
    {
        public static void Main(String[] args)
        {
            var test = new NumArray([-2, 0, 3, -5, 2, -1]);
            Console.WriteLine(test.SumRange(0, 2));
        }
    }

    public class NumArray
    {
        private int[] secv;
        public NumArray(int[] nums)
        {
            int n_size = nums.Count();
            secv = new int[n_size + 1];
            secv[0] = 0;
            for(int i = 1; i <= n_size; i++)
            {
                secv[i] = secv[i - 1] + nums[i - 1];
            }
        }

        public int SumRange(int left, int right)
        {
            return secv[right + 1] - secv[left];
        }
    }

    /**
    * Your NumArray object will be instantiated and called as such:
    * NumArray obj = new NumArray(nums);
    * int param_1 = obj.SumRange(left,right);
    */
}