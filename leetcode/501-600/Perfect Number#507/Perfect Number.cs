namespace problem
{
    // Perfect Number - #507
    // https://leetcode.com/problems/perfect-number

    public class PerfectNumber
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.CheckPerfectNumber(7));
        }
    }

    public class Solution
    {
        public bool CheckPerfectNumber(int num)
        {
            if(num == 1)
            {
                return false;
            }
            int sum = 1, i = 2;
            for(; i * i < num; i++)
            {
                if(num % i == 0)
                {
                    sum += i + num / i;
                }
            }

            if(i * i == num)
            {
                sum += i;
            }

            return sum == num;
        }
    }
}