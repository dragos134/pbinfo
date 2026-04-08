namespace problem
{
    public class ValidPalindrome
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsPalindrome(string s)
        {
            string letters = "abcdefghijklmnopqrstuvwxyz0123456789";
            StringBuilder sb = new StringBuilder();
            for (int i = 0; i < s.Length; i++)
            {
                var l = char.ToLower(s[i]);
                if (letters.Contains(l))
                {
                    sb.Append(l);
                }
            }
            var newS = sb.ToString();

            var sLen = newS.Length;
            for (int i = 0; i < sLen / 2; i++)
            {
                if (newS[i] != newS[sLen - i - 1])
                {
                    return false;
                }
            }

            return true;
        }
    }
}