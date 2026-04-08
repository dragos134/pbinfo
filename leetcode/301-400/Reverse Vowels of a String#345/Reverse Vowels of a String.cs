namespace problem
{
    // Reverse Vowels of a String - #345
    // https://leetcode.com/problems/reverse-vowels-of-a-string

    public class ReverseVowels
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public string ReverseVowels(string s)
        {
            var sSize = s.Length;
            char[] chars = s.ToCharArray();
            var vowels = "aeiou";
            int a = 0;
            int b = sSize - 1;
            while (a < b)
            {
                while (a < sSize && !vowels.Contains(char.ToLower(chars[a])))
                {
                    a++;
                }
                while (b >= 0 && !vowels.Contains(char.ToLower(chars[b])))
                {
                    b--;
                }
                if (a < b)
                {
                    (chars[a], chars[b]) = (chars[b], chars[a]);
                }
                a++;
                b--;
            }
            return new string(chars);
        }
    }
}