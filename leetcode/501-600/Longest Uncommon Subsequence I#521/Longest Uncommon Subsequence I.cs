namespace problem
{
    // Longest Uncommon Subsequence I - #521
    // https://leetcode.com/problems/longest-uncommon-subsequence-i

    public class LongestUncomSubseq
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int FindLUSlength(string a, string b)
        {
            if(a == b)
            {
                return -1;
            }
            return Math.Max(a.Length, b.Length);
        }
    }
}