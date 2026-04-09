namespace problem
{
    // Teemo Attacking - #495
    // https://leetcode.com/problems/teemo-attacking

    public class TeemoAttacking
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.FindPoisonedDuration([1, 2], 2));
        }
    }

    public class Solution
    {
        public int FindPoisonedDuration(int[] timeSeries, int duration)
        {
            int t_size = timeSeries.Length, curr_time = 0, poisoned = 0;

            for (int i = 0; i < t_size; i++)
            {
                poisoned = poisoned + timeSeries[i] + duration - Math.Max(curr_time, timeSeries[i]);
                curr_time = timeSeries[i] + duration;
            }

            return poisoned;
        }
    }
}