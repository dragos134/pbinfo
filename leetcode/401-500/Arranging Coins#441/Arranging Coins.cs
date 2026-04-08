namespace problem
{
    public class ArrangingCoins
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.ArrangeCoins(9));
        }
    }
    public class Solution
    {
        public int ArrangeCoins(int n)
        {
            return (int)(Math.Sqrt(2.0 * n + 0.25) + 0.5) - 1;
        }
    }
}