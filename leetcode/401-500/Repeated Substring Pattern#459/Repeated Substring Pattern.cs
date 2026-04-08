namespace problem
{
    // Repeated Substring Pattern - #459
    // https://leetcode.com/problems/repeated-substring-pattern

    public class RepeatedPattern
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.RepeatedSubstringPattern("babbabbabbabbab"));
        }
    }

    public class Solution
    {
        public bool RepeatedSubstringPattern(string s)
        {
            int s_size = s.Length;
            for(int i = 1; i <= s_size / 2; i++)
            {
                if(s_size % i != 0)
                {
                    continue;
                }

                int cur_len = s_size / i;
                bool ok = true;
                for(int x = 0; x < i; x++)
                {
                    char to_check = s[x];
                    for(int y = 0; y < cur_len; y++)
                    {
                        if(to_check != s[x + i * y])
                        {
                            ok = false;
                            break;
                        }
                    }
                    if(ok == false)
                    {
                        break;
                    }
                }
                if(ok == true)
                {
                    return true;
                }
            }

            return false;
        }
    }
}