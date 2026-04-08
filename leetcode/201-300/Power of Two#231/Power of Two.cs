namespace problem
{
    // Power of Two - #231
    // https://leetcode.com/problems/power-of-two/submissions

    public class PowerOfTwo
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsPowerOfTwo(int n)
        {
            long p = 1;
            while (p < n)
            {
                p *= 2;
            }
            return p == n;
        }
    }
}