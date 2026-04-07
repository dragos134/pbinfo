namespace problem
{
    public class RansomNote
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.CanConstruct("aa", "abb"));
        }
    }

    public class Solution
    {
        public bool CanConstruct(string ransomNote, string magazine)
        {
            int mag_size = magazine.Length;
            int rn_size = ransomNote.Length;
            if (rn_size > mag_size)
            {
                return false;
            }
            int[] freq = new int[26];
            for (int i = 0; i < 26; i++)
            {
                freq[i] = 0;
            }
            for (int i = 0; i < mag_size; i++)
            {
                freq[magazine[i] - 'a']++;
            }
            for (int i = 0; i < rn_size; i++)
            {
                if (freq[ransomNote[i] - 'a'] <= 0)
                {
                    return false;
                }
                freq[ransomNote[i] - 'a']--;
            }
            return true;
        }
    }
}