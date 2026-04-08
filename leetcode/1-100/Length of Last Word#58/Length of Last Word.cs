namespace problem
{
    public class LengthLastWord
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public int LengthOfLastWord(string s)
        {
            int sSize = s.Length;
            int k = sSize - 1;
            int count = 0;
            while (k >= 0 && s[k] == ' ')
            {
                k--;
            }
            while (k >= 0 && s[k] != ' ')
            {
                count++;
                k--;
            }
            return count;
        }
    }
}