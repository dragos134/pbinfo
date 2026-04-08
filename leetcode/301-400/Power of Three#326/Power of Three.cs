namespace problem
{
    // Power of Three - #326
    // https://leetcode.com/problems/power-of-three

    // #ToReview - maybe time improvement?

    public class PowerOfThree
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsPowerOfThree(int n)
        {
            long p = 1;
            while (p < n)
            {
                p *= 3;
            }
            return p == n;
        }
    }
}