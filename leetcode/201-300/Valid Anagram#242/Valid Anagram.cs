namespace problem
{
    // Valid Anagram - #242
    // https://leetcode.com/problems/valid-anagram

    public class ValidAnagram
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsAnagram(string s, string t)
        {
            int nS = s.Length, nT = t.Length;
            if (nS != nT)
            {
                return false;
            }
            int[] charsS = new int[26];
            int[] charsT = new int[26];
            for (int i = 0; i < nS; i++)
            {
                charsS[s[i] - 'a']++;
                charsT[t[i] - 'a']++;
            }
            for (int i = 0; i < 26; i++)
            {
                if (charsS[i] != charsT[i])
                {
                    return false;
                }
            }
            return true;
        }
    }
}