namespace problem
{
    // Valid Perfect Square - #367
    // https://leetcode.com/problems/valid-perfect-square

    public class ValidPerfectSquare
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsPerfectSquare(int num)
        {
            long i = 0;
            while (i * i < num)
            {
                i++;
            }
            return i * i == num;
        }
    }
}