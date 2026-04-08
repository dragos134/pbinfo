namespace problem
{
    public class Number1Bits
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int HammingWeight(int n)
        {
            int count = 0;
            while (n > 0)
            {
                count += (n % 2);
                n /= 2;
            }
            return count;
        }
    }
}