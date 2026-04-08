namespace problem
{
    // License Key Formatting - #482
    // https://leetcode.com/problems/license-key-formatting

    public class LicenseKeyFormatting
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.LicenseKeyFormatting("5F3Z-2e-9-w")); // return 5F3Z-2E9W
        }
    }

    public class Solution
    {
        public string LicenseKeyFormatting(string s, int k)
        {
            int s_size = s.Length;
        }
    }
}