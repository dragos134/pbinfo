namespace problem
{
    // License Key Formatting - #482
    // https://leetcode.com/problems/license-key-formatting

    public class LicenseKeyFormatting
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.LicenseKeyFormatting("-", 2)); // return 5F3Z-2E9W
        }
    }

    public class Solution
    {
        public string LicenseKeyFormatting(string s, int k)
        {
            int s_size = s.Length;
            int chars_size = 0;
            for (int i = 0; i < s_size; i++)
            {
                if (s[i] != '-')
                {
                    chars_size++;
                }
            }
            if (chars_size == 0)
            {
                return "";
            }
            chars_size += (chars_size - 1) / k;
            char[] chars = new char[chars_size];
            int cc_size = chars_size, curr_len = 0;
            for (int i = s_size - 1; i >= 0; i--)
            {
                if (s[i] == '-')
                {
                    continue;
                }

                if (curr_len == k)
                {
                    chars[--cc_size] = '-';
                    curr_len = 0;
                }

                if (s[i] >= 'a' && s[i] <= 'z')
                {
                    chars[--cc_size] = (char)((int)s[i] - 32);
                }
                else
                {
                    chars[--cc_size] = s[i];
                }
                curr_len++;
            }

            return new string(chars);
        }
    }
}