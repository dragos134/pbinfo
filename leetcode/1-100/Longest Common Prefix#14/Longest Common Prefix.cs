namespace problem
{
    public class LongestComPrefix
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public static string LongestCommonPrefix(string[] strs)
        {
            string longestPrefix = strs[0];
            for (int i = 1; i < strs.Length; i++)
            {
                var minLen = Math.Min(longestPrefix.Length, strs[i].Length);
                bool isBreak = false;
                for (int j = 0; j < minLen; j++)
                {
                    if (longestPrefix[j] != strs[i][j])
                    {
                        longestPrefix = strs[i].Substring(0, j);
                        isBreak = true;
                        break;
                    }
                }
                if (!isBreak)
                {
                    if (longestPrefix.Length > strs[i].Length)
                    {
                        longestPrefix = strs[i];
                    }
                }
            }
            return longestPrefix;
        }
    }
}