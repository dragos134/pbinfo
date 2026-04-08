namespace problem
{
    public class ClimbingStairs
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int ClimbStairs(int n)
        {
            int ant2 = 1, ant1 = 2;
            int res = 0;
            if (n == 1) return 1;
            if (n == 2) return 2;
            for (int i = 3; i <= n; i++)
            {
                res = ant2 + ant1;
                ant2 = res;
                (ant1, ant2) = (ant2, ant1);
            }
            return res;
        }
    }
}