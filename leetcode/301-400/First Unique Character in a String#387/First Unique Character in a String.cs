namespace problem
{
    // First Unique Character in a String - #387
    // https://leetcode.com/problems/first-unique-character-in-a-string

    public class FirstUniqueChar
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int FirstUniqChar(string s)
        {
            int sSize = s.Length;
            int[] duplicateChars = new int[26];
            for (int i = 0; i < sSize; i++)
            {
                if (duplicateChars[s[i] - 'a'] == 1)
                {
                    continue;
                }
                bool firstUnique = true;
                for (int j = i + 1; j < sSize; j++)
                {
                    if (s[i] == s[j])
                    {
                        duplicateChars[s[i] - 'a'] = 1;
                        firstUnique = false;
                        break;
                    }
                }
                if (firstUnique)
                {
                    return i;
                }
            }
            return -1;
        }
    }
}