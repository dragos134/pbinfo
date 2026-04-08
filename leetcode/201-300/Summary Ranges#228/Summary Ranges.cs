namespace problem
{
    // Summary Ranges - #228
    // https://leetcode.com/problems/summary-ranges

    // #ToReview - maybe improve time
    public class SymmaryRanges
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public IList<string> SummaryRanges(int[] nums)
        {
            List<string> ans = new List<string>();
            int start = 0, stop = 0, n = nums.Length;
            for (int i = 0; i < n - 1; i++)
            {

                if (nums[i + 1] > nums[i] + 1)
                {
                    if (start == stop)
                    {
                        ans.Add($"{nums[start]}");
                    }
                    else
                    {
                        ans.Add($"{nums[start]}->{nums[stop]}");
                    }
                    start = i + 1;
                    stop = i + 1;
                }
                else
                {
                    stop++;
                }
            }
            if (start != n)
            {
                if (start == stop)
                {
                    ans.Add($"{nums[start]}");
                }
                else
                {
                    ans.Add($"{nums[start]}->{nums[stop]}");
                }
            }
            return ans;
        }
    }
}