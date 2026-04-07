namespace problem
{
    public class AssignCookies
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.FindContentChildren([10, 9, 8, 7], [5, 6, 7, 8]));

            var test2 = new TestSolution();
            Console.WriteLine(test2.FindContentChildren([10, 9, 8, 7], [5, 6, 7, 8]));
        }
    }

    public class Solution
    {
        public int FindContentChildren(int[] g, int[] s)
        {
            int min_gi = int.MaxValue;
            int s_size = s.Length, g_size = g.Length;
            int count = 0;
            for (int i = 0; i < s_size; i++)
            {
                int min_dif = int.MaxValue;
                bool ok = false;
                for (int j = 0; j < g_size; j++)
                {
                    int cur_dif = s[i] - g[j];
                    if (cur_dif >= 0)
                    {
                        ok = true;
                        if (cur_dif < min_dif)
                        {
                            min_dif = cur_dif;
                            min_gi = j;
                        }
                    }
                }
                if (ok == true)
                {
                    count++;
                    g[min_gi] = int.MaxValue;
                }
            }
            return count;
        }
    }

    public class TestSolution
    {
        public int FindContentChildren(int[] g, int[] s)
        {
            Array.Sort(g);
            Array.Sort(s);

            int i = 0, j = 0, count = 0;
            while(i < s.Length && j < g.Length)
            {
                while(i < s.Length && g[j] > s[i])
                {
                    i++;
                }
                if(i >= s.Length)
                {
                    break;
                }
                j++;
                count++;
            }

            return count;
        }
    }
}