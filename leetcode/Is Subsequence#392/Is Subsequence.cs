namespace problem
{
    public class IsSubsequence
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.IsSubsequence("axc", "ahbgdc"));
        }
    }

    public class Solution
    {
        public bool IsSubsequence(string s, string t)
        {
            int s_size = s.Length;
            int t_size = t.Length;
            int k = 0, ok;
            for (int i = 0; i < s_size; i++)
            {
                ok = 0;
                while (k < t_size)
                {
                    if (s[i] == t[k++])
                    {
                        ok = 1;
                        break;
                    }
                }
                if (ok == 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
}