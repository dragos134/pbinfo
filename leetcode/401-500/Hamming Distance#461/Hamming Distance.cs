namespace problem
{
    // Hamming Distance - #461
    // https://leetcode.com/problems/hamming-distance

    public class HammingDistance
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.HammingDistance(1, 3));
        }
    }

    public class Solution
    {
        public int HammingDistance(int x, int y)
        {
            int res = x ^ y;
            int count = 0;
            while(res > 0)
            {
                count += res % 2;
                res /= 2;
            }
            return count;
        }
    }
}