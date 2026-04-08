namespace problem
{
    // Find the Difference - #389
    // https://leetcode.com/problems/find-the-difference

    public class FindDiff
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public char FindTheDifference(string s, string t)
        {
            int s1 = 0, s2 = 0;
            for (int i = 0; i < s.Length; i++)
            {
                s1 += s[i];
            }
            for (int i = 0; i < t.Length; i++)
            {
                s2 += t[i];
            }
            return (char)(s2 - s1);
        }
    }
}