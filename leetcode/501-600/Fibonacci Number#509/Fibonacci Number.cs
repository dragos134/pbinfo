namespace problem
{
    // Fibonacci Number - #509
    // https://leetcode.com/problems/fibonacci-number

    public class FibonacciNumber
    {
        public static void Main(String[] args)
        {
            var test = new OtherSolution();
            Console.WriteLine(test.Fib(7));
            const int MAX_IT = 10;
            for(int i = 0; i <= MAX_IT; i++)
            {
                var rez = test.Fib(i);
                Console.WriteLine($"i = {i}  |  rez = {rez}");
            }
        }
    }

    public class Solution
    {
        public int Fib(int n)
        {
            if(n < 2)
            {
                return n;
            }
            return Fib(n - 1) + Fib(n - 2);
        }
    }

    public class OtherSolution
    {
        public int Fib(int n)
        {
            int num1 = 0, num2 = 1;
            if(n == 0)
            {
                return 0;
            }
            for(int i = 2; i <= n; i++)
            {
                int temp = num1 + num2;
                num1 = num2;
                num2 = temp;
            }
            return num2;
        }
    }
}