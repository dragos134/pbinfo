namespace problem
{
    // Number Complement - #476
    // https://leetcode.com/problems/number-complement

    public class NumberComplement
    {
        public static void Main(String[] args)
        {
            var test = new SolutionTest();
            Console.WriteLine(test.FindComplement(int.MaxValue - 1));
        }
    }

    public class Solution
    {
        public int FindComplement(int num)
        {
            return 0;
        }
    }

    public class SolutionTest
    {
        public int FindComplement(int num)
        {
            uint p = 1;
            while(p <= num)
            {
                p *= 2;
            }
            return (int)(p - 1 - (uint)num);
        }
    }
}