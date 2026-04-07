namespace problem
{
    public class ValidParantheses
    {
        public static void Main(String[] args)
        {
            var test = new Solution();
            Console.WriteLine(test.IsValid("()"));
        }
    }

    public class Solution
    {
        public bool IsValid(string s)
        {
            int s_size = s.Count();
            if(s_size % 2 == 1)
            {
                return false;
            }
            Dictionary<char, char> paranthese_pair = new Dictionary<char, char>{ { ')', '(' }, { ']', '[' }, { '}', '{' } };
            int[] stack = new int[s_size + 1];
            for (int i = 0; i < s_size; i++)
            {
                if(!paranthese_pair.ContainsKey(s[i]))
                {
                    stack[stack[0] + 1] = s[i];
                    stack[0]++;
                }
                else
                {
                    if(stack[0] == 0)
                    {
                        return false;
                    }
                    if(paranthese_pair[s[i]] != stack[stack[0]])
                    {
                        return false;
                    }
                    else
                    {
                        stack[0]--;
                    }
                }
            }
            if(stack[0] > 0)
            {
                return false;
            }
            return true;
        }
    }
}