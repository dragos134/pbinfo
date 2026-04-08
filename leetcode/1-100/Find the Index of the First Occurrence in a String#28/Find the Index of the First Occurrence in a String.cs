namespace problem
{
    public class FirstOccurrenceInString
    {
        public static void Main()
        {

        }
    }

    public class Solution
    {
        public int StrStr(string haystack, string needle)
        {
            int n = haystack.Length;
            int m = needle.Length;
            if (m > n) return -1;
            for (int i = 0; i < n - m + 1; i++)
            {
                bool isOk = true;
                for (int j = 0; j < m; j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        isOk = false;
                        break;
                    }
                }
                if (isOk)
                {
                    return i;
                }
            }

            return -1;
        }
    }
}