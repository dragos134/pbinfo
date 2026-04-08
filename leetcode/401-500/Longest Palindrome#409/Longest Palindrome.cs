namespace problem
{
    public class LongestPalindrome
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.LongestPalindrome("abccccdd"));
        }
    }

    public class Solution
    {
        public int LongestPalindrome(string s)
        {
            int[] lowerFreq = new int[26];
            int[] upperFreq = new int[26];

            int s_size = s.Length;

            for(int i = 0; i < s_size; i++)
            {
                if(s[i] >= 'a' && s[i] <= 'z')
                {
                    lowerFreq[s[i] - 'a']++;
                }
                else
                {
                    upperFreq[s[i] - 'A']++;
                }
            }

            int max_length = 0;
            bool has_odd = false;
            for(int i = 0; i < 26; i++)
            {
                max_length = max_length + lowerFreq[i] + upperFreq[i];
                if(lowerFreq[i] % 2 == 1)
                {
                    max_length--;
                    has_odd = true;
                }
                if(upperFreq[i] % 2 == 1)
                {
                    max_length--;
                    has_odd = true;
                }
            }

            if(has_odd)
            {
                max_length++;
            }

            return max_length;
        }
    }
}