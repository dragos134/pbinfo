namespace problem
{
    public class WordPattern
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.WordPattern("abba", "dog cat cat dogg"));
        }
    }

    public class Solution
    {
        public bool WordPattern(string pattern, string s)
        {
            string[] words = s.Split(" ");
            int w_size = words.Count(), p_size = pattern.Count();
            Dictionary<char, string> p_to_w = new Dictionary<char, string>();
            Dictionary<string, char> w_to_p = new Dictionary<string, char>();
            if(w_size != p_size)
            {
                return false;
            }
            for(int i = 0; i < w_size; i++)
            {
                if(w_to_p.ContainsKey(words[i]))
                {
                    if(p_to_w.ContainsKey(pattern[i]))
                    {
                        if(w_to_p[words[i]] != pattern[i] || p_to_w[pattern[i]] != words[i])
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    if(p_to_w.ContainsKey(pattern[i]))
                    {
                        return false;
                    }
                    else
                    {
                        w_to_p.Add(words[i], pattern[i]);
                        p_to_w.Add(pattern[i], words[i]);
                    }
                }
            }

            return true;
        }
    }
}