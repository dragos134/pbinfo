namespace problem
{
    // #ToReview
    public class ReverseBits
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int ReverseBits(int n)
        {
            int p = 0, k = 32;
            while (n > 0)
            {
                p = (p + n % 2) << 1;
                n /= 2;
                k--;
            }
            p = p << (k - 1);
            return p;
        }
    }
}