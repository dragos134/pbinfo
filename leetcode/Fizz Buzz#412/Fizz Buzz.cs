namespace problem
{
    public class FizzBuzz
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            var result = test.FizzBuzz(15);
            foreach(var i in result)
            {
                Console.Write($"{i} ");
            }
        }
    }

    public class Solution
    {
        public IList<string> FizzBuzz(int n)
        {
            List<string> res = new List<string>();
            for(int i = 1; i <= n; i++)
            {
                if(i % 15 == 0)
                {
                    res.Add("FizzBuzz");
                }
                else if (i % 5 == 0)
                {
                    res.Add("Buzz");
                }
                else if (i % 3 == 0)
                {
                    res.Add("Fizz");
                }
                else
                {
                    res.Add(i.ToString());
                }
            }
            return res;
        }
    }
}