namespace problem
{
    // Power of Four - #342
    // https://leetcode.com/problems/power-of-four

    // #ToReview - Improve time

    public class PowerOfFour
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsPowerOfFour(int n)
        {
            if (n == 0) return false;
            int a = (int)Math.Sqrt(n);
            if (a * a != n) return false;

            return (a & (a - 1)) == 0;
        }
    }
}