namespace problem
{
    // Counting Bits - #338
    // https://leetcode.com/problems/counting-bits

    // #ToReview - maybe improve time?
    public class CountingBits
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int[] CountBits(int n)
        {
            int[] ans = new int[n + 1];
            for (int i = 0; i <= n; i++)
            {
                var cpyNr = i;
                ans[i] = 0;
                while (cpyNr > 0)
                {
                    ans[i] = ans[i] + cpyNr % 2;
                    cpyNr /= 2;
                }
            }

            return ans;
        }
    }
}