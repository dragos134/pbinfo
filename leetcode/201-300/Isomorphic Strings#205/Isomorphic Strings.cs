namespace problem
{
    public class IsomorphicStrings
    {
        public static void Main(String[] args)
        {

        }
    }

    public class Solution
    {
        public bool IsIsomorphic(string s, string t)
        {
            int[] charsS = new int[256];
            int[] charsT = new int[256];
            int n = s.Length;
            for (int i = 0; i < n; i++)
            {
                char ls = s[i];
                char lt = t[i];
                if (charsS[ls] != 0 || charsT[lt] != 0)
                {
                    if (charsS[ls] == 0 || charsT[lt] == 0)
                    {
                        return false;
                    }
                    if (charsS[ls] != lt || charsT[lt] != ls)
                    {
                        return false;
                    }
                }
                else
                {
                    charsS[ls] = lt;
                    charsT[lt] = ls;
                }
            }
            return true;
        }
    }
}